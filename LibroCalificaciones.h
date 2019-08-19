/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-16
 *
 *         Author:  Rafael Jiménez jrjimearce@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>



//Constantes

static const int ESTUDIANTES = 10;
static const int EXAMENES = 3;

class LibroCalificaciones {
	
private:
	
	std::string nombreCurso;
	int calificaciones[ESTUDIANTES][EXAMENES];
	
	//Métodos
	int obtenerNotaMinima();
	int obtenerNotaMaxima();
	float obtenerPromedio(const int , const int);
	
	
	

public:

	LibroCalificaciones();
	LibroCalificaciones(const std::string &nombreCurso, int [ESTUDIANTES][EXAMENES]);
	std::string obtenerReporteNotas();
	std::string obtenerReporteNotasMaxMin();
	const std::string getNombreCurso();
	void setNombreCurso(const std::string &nombreCurso);
	
	
};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H
