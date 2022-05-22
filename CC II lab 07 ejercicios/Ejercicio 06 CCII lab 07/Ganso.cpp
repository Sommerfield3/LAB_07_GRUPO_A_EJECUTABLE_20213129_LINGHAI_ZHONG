#include "Ganso.h"

Ganso::Ganso() {
	
}

Ganso::~Ganso() {
	
}
void Ganso::gansoDatos(){
	nombreCientifico="Anser anser";
	estadoDeConservacion="Preocupacion menor.";
	habitat="Paramos con lagos, tuberas y pantanos, entre otros (prefieren cercania a lugares con agua dulce)";
	zonasDondeSeEncuentra="Islandia, Noruega, Suecia, Finlandia, los Estados bálticos, el norte de Rusia, Polonia, el este de Hungria y Rumania";
}
void Ganso::caminar(){
	cout<<"El ganzo camina."<<endl;
}
void Ganso::nadar(){
	cout<<"El ganzo nada."<<endl;
}
void Ganso::graznar(){
	cout<<"El ganzo grazna."<<endl;
}

