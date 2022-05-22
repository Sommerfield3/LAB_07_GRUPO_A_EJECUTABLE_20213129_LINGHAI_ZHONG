#include "Pato.h"

Pato::Pato() {
	
}

Pato::~Pato() {
	
}
void Pato::patoDatos(){
	nombreCientifico="Anas platyrhynchos";
	estadoDeConservacion="Preocupacion menor";
	habitat="Lagos, estanques, rios, arroyos, estanques de retencion, humedales , marismas, bahias, entre otros";
	zonasDondeSeEncuentra="Nueva Zelanda, Australia, Peru, Brasil, Uruguay, Argentina, Chile, Colombia, Islas Malvinas y Sudafrica.";
}
void Pato::caminar(){
	cout<<"El pato camina."<<endl;
}
void Pato::nadar(){
	cout<<"El pato nada."<<endl;
}
void Pato::parpar(){
	cout<<"El pato parpe."<<endl;
}
