#ifndef OPERACIONFACTORIAL_H
#define OPERACIONFACTORIAL_H
#include "OperacionBase.h"
class OperacionFactorial: public OperacionBase{
public:
	OperacionFactorial();
	~OperacionFactorial();
	int devolverFactorial();
private:
};

#endif

