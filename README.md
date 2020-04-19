# brain
Header file for Keysends on windows.

Usage: doKeyPress(short x, float y);

The short is the key address e.g. the A key is: 0x41
https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes

And the float value is how long the key is held down for e.g 0.0 would be the instantanious (i believe the time is measured in milliseconds)
