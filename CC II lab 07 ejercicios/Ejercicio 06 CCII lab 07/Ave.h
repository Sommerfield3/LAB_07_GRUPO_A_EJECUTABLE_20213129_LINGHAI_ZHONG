#ifndef AVE_H
#define AVE_H
#include <iostream>
using namespace std;
class Ave {
public:
	string nombreCientifico;
	string estadoDeConservacion;
	string habitat;
	string zonasDondeSeEncuentra;
	Ave();
	~Ave();
	void ingresarNombreCientifico(string a);
	void ingresarEstadoDeConservacion(string b);
	void ingresarHabitat(string c);
	void ingresarZonasDondeSeEncuentra(string z);
	void imprimirDatos();
protected:
	
};

#endif

