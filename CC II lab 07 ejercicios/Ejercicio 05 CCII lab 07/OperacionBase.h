#ifndef OPERACIONBASE_H
#define OPERACIONBASE_H

class OperacionBase {
public:
	int operador;
	OperacionBase();
	~OperacionBase();
	void setOperador(int o);
	int getOperador();
};

#endif

