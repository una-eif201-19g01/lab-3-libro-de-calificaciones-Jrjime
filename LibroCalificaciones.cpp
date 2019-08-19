/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-16
 *
 *         Author:  Rafael Jiménez Arce jrjimearce@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>


LibroCalificaciones::LibroCalificaciones() {}

LibroCalificaciones::LibroCalificaciones(const std::string &nombreCurso, int arregloCalificaciones[ESTUDIANTES][EXAMENES])
{

	setNombreCurso(nombreCurso);

	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++)
			calificaciones[estudiante][examen] = arregloCalificaciones[estudiante][examen];
	}
}


int LibroCalificaciones::obtenerNotaMinima()
{
	int Notaminima = 100;

	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++) {
			if (calificaciones[estudiante][examen] < Notaminima) {
				Notaminima = calificaciones[estudiante][examen];
			}
		}
		
	}
	return Notaminima;
	
}

int LibroCalificaciones::obtenerNotaMaxima()
{
	int Notamaxima = 0;

	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++) {
			if (calificaciones[estudiante][examen] > Notamaxima) {
				Notamaxima = calificaciones[estudiante][examen];
			}
		}
	}
	return Notamaxima;
	
}

float LibroCalificaciones::obtenerPromedio(const int est, const int exam)
{
	float Suma = 0;
	float Promedio;

		for (int examen = 0; examen < exam; examen++) {	
				Suma = Suma + calificaciones[est][examen];
		}
		
		Promedio = Suma / 3;
		return Promedio;

}

std::string LibroCalificaciones::obtenerReporteNotasMaxMin()
{
	std::string reporte = "";

	reporte = "\nLa nota minima es: ["+std::to_string(obtenerNotaMinima())+"]\nLa nota maxima es: ["+std::to_string(obtenerNotaMaxima())+"]\n";

	return reporte;
}


std::string LibroCalificaciones::obtenerReporteNotas()
{
	std::string reporte = "";
	std::string titulo = "\nLas siguientes son las notas del curso [" + getNombreCurso() + "]: \n\t\t\t\tExamen 1\tExamen 2\tExamen 3\tPromedio";
	
	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		
		int est = estudiante;
		reporte = reporte + "\nEstudiante [" + std::to_string(estudiante) + "]\t\t\t" + std::to_string(calificaciones[estudiante][0]) + "\t\t"
			+ std::to_string(calificaciones[estudiante][1]) + "\t\t" + std::to_string(calificaciones[estudiante][2]) + "\t\t" + std::to_string(obtenerPromedio(estudiante, 3)) +"";
	}

	return titulo + reporte;


	
	
	
}

const std::string LibroCalificaciones::getNombreCurso()
{
	return nombreCurso;
}

void LibroCalificaciones::setNombreCurso(const std::string & nombre)
{
	nombreCurso = nombre;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	