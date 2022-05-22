/*5*/
/*Apellidos y nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "OperacionFactorial.h"
using namespace std;

int main (int argc, char *argv[]) {
	OperacionFactorial numero1;
	numero1.setOperador(10);
	cout<<"El numero es: "<<numero1.getOperador()<<endl;
	cout<<"El factorial del numero es: "<<numero1.devolverFactorial()<<endl;
	system("pause");
	return 0;
}

