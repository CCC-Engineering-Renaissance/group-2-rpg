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


// main function
int main() {
    thing();
    cout << "The date is November 22, 2024. The day the engineering Renaissance RPG is due\n";
    cout << "You wake up in a cold dark room with no doors or windows in sight. Also you can suddenly fly?\n";
    // why isnt my setw(n) working???
    //trying to somewhat center it with the longer lines of text without
    cout << center << setw(15) << "I can't explain that one yet....\n\n\n";
    cout << "This RPG will use reducing numbers, so let's get familiar with it.\n";
    cout << "In order to reduce a number, add the sum of its digits.\n";
    cout << "If your answer still has more than one digit, then repeat this process until you 're left with a single digit.\n";
    cout << "Let' s look at an example, your number is 407 : 4 + 0 + 7 = 11, 1 + 1 = 2, so 407 becomes 2.";

    //user tries now

    //varaible to hold users answer
    int answer;
    cout << "Alright, now it's your turn. Make your way over to the ! and put in today's date. Good luck!";

    
void door_1 (){
    cout << "If you need to go back and look at the puzzles, enter 0 to cancel.\n";
int passcode1;
cout << "Please enter the passcode:\n";
cin >> passcode_1;
while(true) {
	if (passcode_1 > 9) {
		cout << "The passcode is a one digit number.\n";
		cout << "Please try again.\n";
		}
	else if (passcode_1 = 5) {
		cout << "The room goes dark for a second.\n";
		// switch map from Room 1 to Room 2
        cout << "When the light returns, you find that the decorations in the room have changed, or perhaps you're in a different room with identical architecture. Either way, it doesn't matter. You're still trapped.\n";
		break;
		}
	else if (passcode_1 = 0) {
		break;
		}
	else {
		cout << "Please try again.\n";
		}
}    
}}
