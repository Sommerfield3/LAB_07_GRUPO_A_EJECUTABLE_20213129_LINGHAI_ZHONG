/*6. Escribe un programa que implemente la siguiente jerarquía de clases, Debe
implementar aquellos atributos y métodos necesarios para que se pueda ejecutar el
siguiente programa:*/
/*Apellidos y nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "Ganso.h"
#include "Pato.h"
#include "Gallina.h"
using namespace std;

int main (int argc, char *argv[]) {
	Ganso unGanso;
	Pato unPato;
	Gallina unaGallina;
	unGanso.gansoDatos();/*Datos base del ganso comun*/
	unPato.patoDatos();/*Datos base del pato comun*/
	unaGallina.GallinaDomesticaDatos();/*Datos base de la gallina comun*/
	unGanso.imprimirDatos();
	unGanso.caminar();
	unGanso.nadar();
	unGanso.graznar();
	unGanso.gansoDatos();
	unPato.imprimirDatos();
	unPato.caminar();
	unPato.nadar();
	unPato.parpar();
	unaGallina.imprimirDatos();
	unaGallina.caminar();
	unaGallina.nadar();
	unaGallina.cacarear();
	system("pause");
	return 0;
}

