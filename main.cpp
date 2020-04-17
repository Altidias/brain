#include <iostream>
#include <Windows.h>
using namespace std;


class neuron {
public:
	float _w, _r;
};

class nlist {
public:
	int neuronarray[10];
	
};

void doAKeyPress(){
	// This structure will be used to create the keyboard
   // input event.
	INPUT ip;

	Sleep(100);

	// Set up a generic keyboard event.
	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;

	// Press the "A" key
	ip.ki.wVk = 0x41; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}


int main() {
	nlist arraydef;

	for (int i = 0; i < 10; i++) {
		arraydef.neuronarray[i] = i;
	}


	cout << arraydef.neuronarray[4];
	return 0;
}
