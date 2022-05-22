#include "ClaseDisco.h"

ClaseDisco::ClaseDisco() {
	
}

ClaseDisco::~ClaseDisco() {
	
}
void ClaseDisco::definirTipoDeDisco(string c){
	tipoDeDisco=c;
}
void ClaseDisco::imprimirInfo(){
	cout<<"Tipo del contenido del multimedia: "<<tipoMultimedia<<endl;
	cout<<"Titulo del contenido: "<<tituloContenido<<endl;
	cout<<"Tipo de disco: "<<tipoDeDisco<<endl;
}

