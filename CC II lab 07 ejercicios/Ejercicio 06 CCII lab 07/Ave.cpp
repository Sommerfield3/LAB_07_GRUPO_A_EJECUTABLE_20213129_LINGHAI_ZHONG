#include "Ave.h"

Ave::Ave() {
	
}

Ave::~Ave() {
	
}
void Ave::ingresarNombreCientifico(string a){
	nombreCientifico=a;
}
void Ave::ingresarEstadoDeConservacion(string b){
	estadoDeConservacion=b;
}
void Ave::ingresarHabitat(string c){
	habitat=c;
}
void Ave::ingresarZonasDondeSeEncuentra(string z){
	zonasDondeSeEncuentra=z;
}
void Ave::imprimirDatos(){
	cout<<"Nombre cientifico: "<<nombreCientifico<<endl;
	cout<<"Estado: "<<estadoDeConservacion<<endl;
	cout<<"Habitat: "<<habitat<<endl;
	cout<<"Se encuentra en: "<<zonasDondeSeEncuentra<<endl;
}
