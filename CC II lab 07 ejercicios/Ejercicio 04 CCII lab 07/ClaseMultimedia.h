#ifndef CLASEMULTIMEDIA_H
#define CLASEMULTIMEDIA_H
#include <iostream>
using namespace std;
class ClaseMultimedia {
public:
	string tipoMultimedia;
	string tituloContenido;
	ClaseMultimedia();
	~ClaseMultimedia();
	void tipoContenidoMultimedia(string mult);
	void tituloDelContenido(string titulo);
	
};

#endif

