/*4. Escribe una clase de nombre ClaseDisco, que herede de la clase ClaseMultimedia los
atributos y m�todos definidos por usted. La clase ClaseDisco tiene, aparte de los
elementos heredados, un atributo m�s tambi�n definido por usted. Al momento de
imprimir la informaci�n debe mostrase por pantalla toda la informaci�n.*/
/*Apellidos y nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "ClaseDisco.h"
using namespace std;

int main (int argc, char *argv[]) {
	ClaseDisco DVD;
	DVD.definirTipoDeDisco("DVD");
	DVD.tipoContenidoMultimedia("Audio y video");
	DVD.tituloDelContenido("Bee Movie");
	DVD.imprimirInfo();
	return 0;
}

