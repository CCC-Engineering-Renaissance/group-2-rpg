#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// This is a distraction. There is no answer to this puzzle.
int choice;
void redherring() {
cout << "You pick up a book with an image of a computer on the cover. Flip to the first page?\n";
cout << "Please enter 1 for yes or 0 for no. You will be able to make this decision again.\n";
cin >> choice;
if (choice = 1) {
cout << "You flip to the first page. It says:\n";
cout << "\"01010010 01000101 01000100 00100000 01001000 01000101 01010010 01010010 01001001 01001110 01000111\".\n";
cout << "Flip to the second page?\n";
cout << "Please enter 1 for yes or 0 for no. You will be able to make this decision again.\n";
cin >> choice;
  	if (choice = 1){
    cout << "You flip to the second page. It says:\n";
    cout << "68 105 100 32 121 111 117 32 114 101 97 108 108 121 32 106 117 115 116 32 102 97 108 108\n";
    cout << "32 102 111 114 32 116 104 101 32 115 97 109 101 32 116 114 105 99 107 32 116 119 105 99 101 63”.\n";
    cout << "There are no more pages. How disappointing.\n";
    }
    else {
    cout << "You put down the book. How incurious!\n";
}}
else {
cout << "You put down the book. How incurious!\n";
}}

// This is the first puzzle for room 4. It uses a Caesar cipher with a shift of -1. The answer to this puzzle is 2.
void puzzle_4_1() {
  cout << "You pick up a note that says \"dhfgs gtmcqdc mhmdsx sgqdd\". Flip it over for a hint?\n";
  cout << "Please enter 1 for yes or 0 for no. You will be able to make this decision again.\n";
  cin >> choice;
if (choice = 1){
cout << "All the back says is: \"Z = 25\".\n";
}
else {
cout << "You put down the note, but it will always be there waiting in case you change your mind.\n";
}}

