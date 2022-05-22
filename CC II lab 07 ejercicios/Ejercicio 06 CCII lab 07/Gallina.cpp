#include "Gallina.h"

Gallina::Gallina() {
	
}

Gallina::~Gallina() {
	
}
void Gallina::GallinaDomesticaDatos(){
	nombreCientifico="Gallus domesticus";
	estadoDeConservacion="Domesticada";
	habitat="De manera natural habitan en los bosques.";
	zonasDondeSeEncuentra="Se encuentran en casi todo el mundo excepto los polos y el Vaticano.";
}
void Gallina::caminar(){
	cout<<"La gallina camina."<<endl;
}
void Gallina::nadar(){
	cout<<"La gallina nada."<<endl;
}
void Gallina::cacarear(){
	cout<<"La gallina cacarea."<<endl;
}
