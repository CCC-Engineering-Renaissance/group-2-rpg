//#include "colors.h" // If you want to make your map look pretty and use colors :)
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;


//preprocesor

void date();
void thing (){
    cout << "whatever" << endl;
}

int main(){
  thing();
vector<string> room1, room2, room3, room4; 
// You can use a 2D vector if you'd like, but it's a lot better to emulate a 2D vector with a 1D one.

// for some reasons the rooms wont compile
// needs looking into
/*
room1 = {

    "------------------------------------------",
    "|                                        |",
    "|                                        |",
    "|                                        |",
    "|                                        |",
    "|                        2024            |",
    "|                                  !     |",
    "------------------------------------------",
};
room2 = {

    "------------------------------------------",
    "|                                        |",
    "|                                        |",
    "|          le                            |",
    "|        painting                        |",
    "|                          O             |",
    "|                                  !     |",
    "------------------------------------------"};
room3 = {

    "------------------------------------------",
    "|                                        |",
    "|                                        |",
    "|                                        |",
    "|         @                              |",
    "|         |*                             |",
    "|                                  !     |",
    "------------------------------------------",
};
room4 = {

    "------------------------------------------",
    "|                                        |",
    "|                                        |",
    "|                          =             |",
    "|                                        |",
    "|           ~                            |",
    "|                                  !     |",
    "------------------------------------------",
};
*/



// This is where all your logic will go
while (1 > 2)
{
  // TODO: Get user input

  // TODO Move character or something cool using the user's input

  // TODO: Output map

}
//date();
}

// Room 1 puzzles


//
void date() {
  // mac users use clear and windows uses cls

  // system("cls");

  system("clear");
  // working on alligning this
  cout << setw(20)<< "The date is November 9, 2024. The day after the Engineering Renaissance assignment is due." << endl << right;
  cout << right << setw(50) << " You wake up in a cold dark room with no doors or windows in sight." << endl;
  cout << setw(75) << right << "Also you can suddenly fly. I can't explain that one yet.";
}

