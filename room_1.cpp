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

// main function
int main() {
    cout << "The date is November 22, 2024. The day the engineering Renaissance RPG is due\n";
    cout << "You wake up in a cold dark room with no doors or windows in sight. Also you can suddenly fly?\n";
    // why isnt my setw(n) working???
    //trying to somewhat center it with the longer lines of text without
    cout << left << setw(15) << "I can't explain that one yet....\n\n\n";
    cout << "This RPG will use reducing numbers, so let's get familiar with it.\n";
    cout << "In order to reduce a number, add the sum of its digits.\n";
    cout << "If your answer still has more than one digit, then repeat this process until you 're left with a single digit.\n";
    cout << "Let' s look at an example, your number is 407 : 4 + 0 + 7 = 11, 1 + 1 = 2, so 407 becomes 2.";

    //user tries now

    //varaible to hold users answer
    int answer;
    cout << "Alright, now it’s your turn. Make your way over to the ! and put in today’s date. Good luck!";
    cout << "\n\nwhat did you get?";
    cout << "\nanswer: ";
    cin >> answer;

    //come back and set a real answer later
    if (answer = /* the correct answer */) {
        cout << "correct";
    }
    else {
        while (answer != /* the correct answer */) {
            cout << "try again";
            cin >> answer;
        }
        cout << "you finally got it correct";
    }
}
