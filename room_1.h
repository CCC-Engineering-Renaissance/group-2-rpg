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

void tutorial() {
	cout << "This RPG will use reducing numbers, so let’s get familiar with it.";
	cin.get();
	cout << "In order to reduce a number, add the sum of its digits.";
	cin.get();
	cout << "If your answer still has more than one digit, then repeat this process until you're left with a single digit."; 
	cin.get();
	cout << "Let’s look at an example, your number is 407:";
	cin.get();
	cout << "4+0+7=11, 1+1=2, so 407 becomes 2.";
	cin.get();
	cout << "Alright, now it’s your turn.";
	cin.get();
	cout << "Make your way over to the ! and put in today’s date. Good luck!";
	cin.get();
	cout << "P.S. There's no rush, feel free to check out the room first.";
	cin.get();
}
		
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

void calendar() {
	cout << "It's a calendar.";
	cin.get();
	cout << "The date is November 22, 2024.";
	cin.get();
}
int choice;
void retutorial() {
	cout << "Do you need to see the summing digits tutorial again?";
	cin.get();
	cout << "Please enter 1 for yes or 0 for no. You will be able to make this decision again.\n";
	cin >> choice;
	if (choice == 1){
	tutorial();
}
else if (choice == 0){
cout << "See ya later!";
cin.get();
}}
