/*1. Crear una clase Persona del cual tendrá métodos asignar una edad y nombre. Una
segunda clase, alumno, tendrá que heredar este contenido y a través de esta clase
poder asignar los datos de edad y nombre de los estudiantes.*/
/*Apellidos y nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "Alumno.h"
using namespace std;

int main (int argc, char *argv[]) {
	Alumno Alumno1;
	Alumno1.obtenerEdad(17);
	Alumno1.obtenerNombre("Linghai Joaquin, Zhong Callasi");
	Alumno1.imprimirEdad();
	Alumno1.imprimirNombre();
	return 0;
}

