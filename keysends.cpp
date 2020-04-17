#include "keysends.h"

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

void doWKeyPress(){
// This structure will be used to create the keyboard
 // input event.
INPUT ip;

Sleep(100);

// Set up a generic keyboard event.
ip.type = INPUT_KEYBOARD;
ip.ki.wScan = 0; // hardware scan code for key
ip.ki.time = 0;
ip.ki.dwExtraInfo = 0;

// Press the "w" key
ip.ki.wVk = 0x57; // virtual-key code for the "w" key
ip.ki.dwFlags = 0; // 0 for key press
SendInput(1, &ip, sizeof(INPUT));

// Release the "w" key
ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
SendInput(1, &ip, sizeof(INPUT));
}

void doSKeyPress(){
// This structure will be used to create the keyboard
 // input event.
INPUT ip;

Sleep(100);

// Set up a generic keyboard event.
ip.type = INPUT_KEYBOARD;
ip.ki.wScan = 0; // hardware scan code for key
ip.ki.time = 0;
ip.ki.dwExtraInfo = 0;

// Press the "s" key
ip.ki.wVk = 0x53; // virtual-key code for the "s" key
ip.ki.dwFlags = 0; // 0 for key press
SendInput(1, &ip, sizeof(INPUT));

// Release the "s" key
ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
SendInput(1, &ip, sizeof(INPUT));
}

void doDKeyPress(){
// This structure will be used to create the keyboard
 // input event.
INPUT ip;

Sleep(100);

// Set up a generic keyboard event.
ip.type = INPUT_KEYBOARD;
ip.ki.wScan = 0; // hardware scan code for key
ip.ki.time = 0;
ip.ki.dwExtraInfo = 0;

// Press the "d" key
ip.ki.wVk = 0x44; // virtual-key code for the "d" key
ip.ki.dwFlags = 0; // 0 for key press
SendInput(1, &ip, sizeof(INPUT));

// Release the "d" key
ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
SendInput(1, &ip, sizeof(INPUT));
}
