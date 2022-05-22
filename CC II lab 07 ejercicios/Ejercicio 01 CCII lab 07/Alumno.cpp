#include "Alumno.h"

Alumno::Alumno() {
	
}

Alumno::~Alumno() {
	
}
void Alumno::obtenerEdad(int x){
	edad=x;
}
void Alumno::obtenerNombre(string y){
	nombre=y;
}
void Alumno::imprimirEdad(){
	cout<<"La edad de la persona es "<<edad<<"."<<endl;
}
void Alumno::imprimirNombre(){
	cout<<"El nombre del alumno es "<<nombre<<"."<<endl;
}
