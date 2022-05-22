#ifndef OBJETOS_H
#define OBJETOS_H
#include "Color.h"
#include "Material.h"
class Objetos: public Color, public Material{
public:
	string nombreObjeto;
	Objetos();
	~Objetos();
	void obtenerNombreObjeto(string nombre);
	void imprimirDatos();
private:
};

#endif

