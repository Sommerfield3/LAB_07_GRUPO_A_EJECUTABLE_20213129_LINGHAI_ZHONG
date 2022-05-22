#ifndef MATERIAL_H
#define MATERIAL_H
#include <iostream>
using namespace std;

class Material {
public:
	string material;
	Material();
	~Material();
	void determinarMaterial(string m);
};

#endif

