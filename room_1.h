/*
This program is puzzel room 1
for engr game 

we will convert this into a function probably later on

do people even read my comments??
beisdes you robert requiring them
*/

// preprocessors
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// There is only one puzzle in room one. The player needs to input the date (November 22,2024) as a reduced number to escape to room 2.


void door_1 (){
    cout << "If you need to go back and look at the puzzles, enter 0 to cancel.\n";
int passcode1;
cout << "Please enter the passcode:\n";
while(true) {
	cin >> passcode_1;
	if (passcode_1 > 9) {
		cout << "The passcode is a one digit integer.\n";
		cout << "Please try again.\n";
		}
	else if (passcode_1 == 5) {
		cout << "The room goes dark for a second.";
		cin.get();
		// switch map from Room 1 to Room 2
        cout << "When the light returns, you find that the decorations in the room have changed, or perhaps you're in a different room with identical architecture.";
		cin.get();
		cout << "Either way, it doesn't matter. You're still trapped.\n";
		break;
		}
	else if (passcode_1 == 0) {
		break;
		}
	else {
		cout << "Please try again.\n";
		}
}    

