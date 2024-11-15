#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


void puzzle_2_1() {
cout << "You see a lovely portrait of a king, queen, and their two sons.\n" 
cout << "One son is just a baby, but the other one looks much older.\n"; 
cout << "Underneath the portrait, it says that both sons are named Ace.\n";
  }
// This is the second puzzle of room 2. The correct answer is the number of people in Engineering Renaissance. If the player doesn't know this
// number, they can still obtain the answer by adding their guess and the number of people missing. This answer for this puzzle is 7.
void puzzle_2_2() {
int people;
int peoplemissing;
cout << "It's an oval shaped mirror.\n";
cout << "You stare a little too long, and the mirror whispers to you,\n"; 
cout << "\"How many people are in this room right now?\".";
while(true) {
    cin >> people;
	if (people == 0) {
	cout << "Not even gonna count yourself? Try that again.\n";
		}
	else if (people == 1) {
	cout << "Not in the game silly. Take your eyes off the screen. Look around you.\n";
		}
	else if (people == 34) {
  cout << "Excellent work! Try not to forget that number. Come see yourself again if you do.\n";
  break;
  }
  else if (people > 34) {
  cout << "Either you're very popular, or you're lying. Either way, just pick a lower number.\n";
  }
	else {
  peoplemissing = 34 - people;
  cout << "Yikes! Looks like " << peoplemissing << " people didn't show up…\n";
  cout << "When you put in the passcode, make sure you use the number of people that *should* have been there.\n"; 
  cout << "See yourself later!\n";
  break;
}}} 
// This is the third puzzle of room 3. All the capitalized letters correspond to Roman Numerals. The answer for this puzzle is 4.
void puzzle_2_3() {
cout << "You bunk your head on the ceiling and notice someone wrote on it.\n";
cout << "\"I aM DeCLan.\" Hmm… Declan, you wonder if that's a Roman name.\n";
  }
void door_2(){
int passcode_2;
cout << "Hopefully you already caught on, but there were multiple puzzles in this room.\n"; 
cout << "Each puzzle's answer needs to be reduced down to a single digit number.\n"; 
cout << "When entering these digits in the passcode, you will need to enter them based on the location of the puzzle in the room.\n"; 
cout << "The leftmost puzzle will have their number entered first.\n"; 
cout << "The second leftmost puzzle will have their number entered next, and so on and so forth.\n";
cout << "Now before you ask about that one puzzle in that one odd location, that one can be entered last.\n";
cout << "If you need to go back and look at the puzzles, enter 0 to cancel.\n";
cout << "Please enter the passcode: ";
while(true) {
    cin >> passcode_2;
	if (passcode_2 > 999 || passcode_2 < 100) {
		cout << "The passcode is a three digit number.\n";
		cout << "Please try again: ";
		}
	else if (passcode_2 == 574) {
		cout << "The room goes dark for a second.\n";
		// switch map from Room 2 to Room 3
cout << "Well uh, you probably know the drill by now.\n"; 
cout << "The room looks different! Also you're still trapped.\n"; 
cout << "Sorry about that.\n";
		break;
		}
	else if (passcode_2 == 0) {
		break;
		}
	else {
		cout << "Please try again: ";
		}
}}

int main()
{
    puzzle_2_1();
    puzzle_2_2();
    puzzle_2_3();
    door_2();
}
