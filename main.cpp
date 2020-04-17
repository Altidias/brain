#include <iostream>
#include <Windows.h>
#include "keysends.h"
using namespace std;

class neuron {
public:
	float _w, _r;
};

class nlist {
public:
	int neuronarray[10];

};


int main() {
	nlist arraydef;

	for (int i = 0; i < 10; i++) {
		arraydef.neuronarray[i] = i;
	}


	cout << arraydef.neuronarray[4];
	return 0;
}
