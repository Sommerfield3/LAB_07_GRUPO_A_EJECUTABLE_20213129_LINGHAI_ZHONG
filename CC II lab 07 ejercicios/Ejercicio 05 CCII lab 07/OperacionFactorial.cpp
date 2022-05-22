#include "OperacionFactorial.h"

OperacionFactorial::OperacionFactorial() {
	
}

OperacionFactorial::~OperacionFactorial() {
	
}
int OperacionFactorial::devolverFactorial(){
	int factorial;
	if (operador>=0){
		factorial=1;
		for (int i=operador;i>=0;i--){
			if (i>0){
				factorial=factorial*i;
			}
			else{
				factorial=factorial;
			}
		}
	}
	else{
		return 0;
	}
	return factorial;
}

