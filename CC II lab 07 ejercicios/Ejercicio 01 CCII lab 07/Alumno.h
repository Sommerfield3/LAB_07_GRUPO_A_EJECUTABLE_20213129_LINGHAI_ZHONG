#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"
class Alumno: public Persona{
public:
	Alumno();
	~Alumno();
	void obtenerEdad(int x);
	void obtenerNombre(string y);
	void imprimirEdad();
	void imprimirNombre();
};

#endif

