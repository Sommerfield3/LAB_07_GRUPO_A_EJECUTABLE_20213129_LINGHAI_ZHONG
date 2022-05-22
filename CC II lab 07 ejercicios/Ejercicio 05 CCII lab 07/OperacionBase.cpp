#include "OperacionBase.h"

OperacionBase::OperacionBase() {
	
}

OperacionBase::~OperacionBase() {
	
}
void OperacionBase::setOperador(int o){
	operador=o;
}

int OperacionBase::getOperador(){
	return operador;
}
