#ifndef CLASEDISCO_H
#define CLASEDISCO_H
#include "ClaseMultimedia.h"
class ClaseDisco: public ClaseMultimedia{
public:
	string tipoDeDisco;
	ClaseDisco();
	~ClaseDisco();
	void definirTipoDeDisco(string c);
	void imprimirInfo();
};

#endif

