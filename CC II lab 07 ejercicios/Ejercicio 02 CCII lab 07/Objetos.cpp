#include "Objetos.h"

Objetos::Objetos() {
	
}

Objetos::~Objetos() {
	
}
void Objetos::obtenerNombreObjeto(string nombre){
	nombreObjeto=nombre;
}
void Objetos::imprimirDatos(){
	cout<<"Nombre del objeto: "<<nombreObjeto<<endl;
	cout<<"Valores RGB del objeto (color): "<<endl;
	cout<<"-Rojo: "<<Rojo<<endl;
	cout<<"-Verde: "<<Verde<<endl;
	cout<<"-Azul: "<<Azul<<endl;
	cout<<"Material principal del objeto: "<<material<<endl;
	
}
