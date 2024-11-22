#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>
#include "number_wordle.h"
using namespace std;
// This is a distraction. There is no answer to this puzzle.
//declaring vaarible

void redherring() {
int choice;
cout << "You pick up a book with an image of a computer on the cover. Flip to the first page?\n";
cout << "Please enter 1 for yes or 0 for no.\nYou will be able to make this decision again.\n";
cin >> choice;
if (choice == 1) {
cout << "You flip to the first page. It says:";
cin.get();
cout << "\"01010010 01000101 01000100 00100000 01001000 01000101 01010010 01010010 01001001 01001110 01000111\".";
cin.get();
cout << "Flip to the second page?\n";
cout << "Please enter 1 for yes or 0 for no. You will be able to make this decision again.\n";
cin >> choice;
  	if (choice == 1){
    // couts are in binaryh code
    
    cout << "You flip to the second page. It says:";
    cin.get();
    cout << "68 105 100 32 121 111 117 32 114 101 97 108 108 121 32 106 117 115 116 32 102 97 108 108";
    cin.get();
    cout << "32 102 111 114 32 116 104 101 32 115 97 109 101 32 116 114 105 99 107 32 116 119 105 99 101 63”.";
    cin.get();
    cout << "There are no more pages. How disappointing.";
    cin.get();
    }
    else if(choice == 0){
    cout << "You put down the book. How incurious!";
    cin.get();
}}
    else if(choice == 0) {
    cout << "You put down the book. How incurious!";
    cin.get();
}
}

// This is the first puzzle for room 4. It uses a Caesar cipher with a shift of -1. 
// The answer to this puzzle is 2.
void puzzle_4_1() {
  // users choice
  int choice = 0;
  cout << "You pick up a note that says \"dhfgs gtmcqdc mhmdsx sgqdd\". Flip it over for a hint?\n";
  cout << "Please enter 1 for yes or 0 for no. You will be able to make this decision again.\n";
  cin >> choice;
if (choice == 1){
cout << "All the back says is: \"Z = 25\".";
cin.get();
}
else if (choice == 0){
cout << "You put down the note, but it will always be there waiting in case you change your mind.";
cin.get();
}}

//This is the second puzzle for room 4. It is number wordle. The answer for this puzzle is 2.
void puzzle_4_2() {
  cout << "There is a keypad on the wall.";
  cin.get();
  cout << "It wants you to enter the numbers that will make this equation true:";
  cin.get();
  cout << "__ * __ + __ / __ = __";
  cin.get();
  cout << "All numbers are single digit except for the answer.";
  cin.get();
  cout << "You will recieve more clues after your first guess.";
  //number wordle comes from a header file
  number_wordle();
}

//This is the third puzzle for room 4. It is in reference to 01134 as it appears upside down on a calculator.
//The answer to this puzzle is 9.
void puzzle_4_3() {
  cout << "There's an inscription on the wall.";
  cin.get();
  cout << "All it says is \"hEllo\".";
  cin.get();
  cout << "The odd capitalization bothers you.";
  cin.get();
  cout << "There is no more to this hint.";
  cin.get();
}
