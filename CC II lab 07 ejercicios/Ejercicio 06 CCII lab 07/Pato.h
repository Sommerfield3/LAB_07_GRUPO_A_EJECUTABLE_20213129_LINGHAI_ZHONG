#ifndef PATO_H
#define PATO_H
#include "Ave.h"
class Pato: public Ave{
public:
	Pato();
	~Pato();
	void patoDatos();/*Datos predeterminados*/
	void caminar();
	void nadar();
	void parpar();
private:
};

#endif

