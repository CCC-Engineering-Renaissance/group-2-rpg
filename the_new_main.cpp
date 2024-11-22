
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include"colors.h"
#include"room_1.h"
using namespace std;

//function prototypes
vector<string> room1;
vector<string> room1_edited;


// our amazing main
int main() {

vector<string> room1;
vector<string> room1_edited;

// the design of room 1
room1 = {

"------------------------------------------\n",
"|                                        |\n",
"|                                        |\n",
"|                                        |\n",
"|         #                              |\n", // # is at (10,4)
"|                        2024            |\n", // 2024 is at (25-28,5)
"|                                  !     |\n", // ! is at (35,6)
"------------------------------------------\n",
};

int current_column = 2;
int current_row = 6;
room1_edited = room1;
room1_edited[current_row][current_column] ='&';
for (int i = 0; i < room1_edited.size(); i++)
{
cout << room1_edited[i] << "";}
// raw mode doesnt make us not need to use enter key after input
set_raw_mode(true);
while (true) {
char player_movement;
// quick read is our cin but we dont need enter
player_movement = quick_read();

//declaring the movement key
char c = toupper(player_movement);
if (c == 'W') {  // w moves the charater up
current_row = current_row - 1;
    if(current_row == 0){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row + 1; // this stop the users from leaving the map
}
else if(current_row == 7){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row - 1;  // allows user to move up
}
else if(current_column == 0){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column + 1;    // this stop the user from leavig the map
}
else if(current_column == 41){ // column 41 is the bottom of map
    room1_edited[current_row][current_column] = '|';
    current_column = current_column - 1; // allows user to move up
}
room1_edited = room1;
// clears the room
system("clear");
room1_edited[current_row][current_column] ='&';
for (int i = 0; i < room1_edited.size(); i++)
{
cout << room1_edited[i] << "";}

}
else if (c == 'A') { // moves charater to the left
current_column = current_column - 1;
    if(current_row == 0){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row + 1; // stops user from leaving the map
}
else if(current_row == 7){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row - 1; // allowws user to move left
}
else if(current_column == 0){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column + 1; // stops user from moving out of map
}
else if(current_column == 41){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column - 1; // allows user to move left
}
room1_edited = room1;
//clearing old map
system("clear");
room1_edited[current_row][current_column] ='&';
for (int i = 0; i < room1_edited.size(); i++)
{
cout << room1_edited[i] << "";}

}
else if (c == 'S') { // for user to move down
current_row = current_row + 1;
    if(current_row == 0){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row + 1; // allows user to move down
    }
else if(current_row == 7){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row - 1; // stops user from moving down
}
else if(current_column == 0){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column + 1; // allows user to move down
}
else if(current_column == 41){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column - 1; // stop user from leaving the map
}
room1_edited = room1;

// clears old maps
system("clear");

room1_edited[current_row][current_column] ='&';
for (int i = 0; i < room1_edited.size(); i++)
{
cout << room1_edited[i] << "";}

}
else if (c == 'D') { // this allows the user to move down
current_column = current_column + 1;
    if(current_row == 0){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row + 1; // thisb allows the user to move right
}
else if(current_row == 7){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row - 1; // this stop the user from moving to the right
}
else if(current_column == 0){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column + 1; // this allows the user to move the right
}
else if(current_column == 41){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column - 1; // this stops the user from moving to the right
}
room1_edited = room1;

// this clears the previous movement
system("clear");
room1_edited[current_row][current_column] ='&';
for (int i = 0; i < room1_edited.size(); i++)
{
cout << room1_edited[i] << "";}

}

if(c == 'E'){
    if((current_row == 4 && current_column == 10)){
    retutorial();
}
    else if((current_row == 5) && (current_column == 25 || current_column == 26 || current_column == 27 || current_column ==28)){
    calendar();
    }
    else if((current_row == 6 && current_column == 35)){
    if (door_1()) break;
}}
}

vector<string> room2;
vector<string> room2_edited;
room2 =
{
"------------------------------------------\n",
"|                                        |\n",
"|                                        |\n", // - is at (23 , 1)
"|          le                            |\n",
"|        painting                        |\n",
"|                          O             |\n", //0 is at (27 ,5)
"|                                  !     |\n", // ! is at (35, 6)
"------------------------------------------\n"
};
current_column = 35;
current_row = 6;
room2_edited = room2;
room2_edited[current_row][current_column] ='&';
for (int i = 0; i < room2_edited.size(); i++)
{
cout << room2_edited[i] << "";}
set_raw_mode(true);
while(true){
    char player_movement;
player_movement = quick_read();
char c = toupper(player_movement);
if (c == 'W') {
current_row = current_row - 1;
    if(current_row == 0){
    room2_edited[current_row][current_column] = '-';
    current_row = current_row + 1;
    puzzle_2_3();
}
else if(current_row == 7){
    room2_edited[current_row][current_column] = '-';
    current_row = current_row - 1;
}
else if(current_column == 0){
    room2_edited[current_row][current_column] = '|';
    current_column = current_column + 1;
}
else if(current_column == 41){
    room2_edited[current_row][current_column] = '|';
    current_column = current_column - 1;
}
room2_edited = room2;
system("clear");
room2_edited[current_row][current_column] ='&';
for (int i = 0; i < room2_edited.size(); i++)
{
cout << room2_edited[i] << "";}

}
else if (c == 'A') {
current_column = current_column - 1;
    if(current_row == 0){
    room2_edited[current_row][current_column] = '-';
    current_row = current_row + 1;
}
else if(current_row == 7){
    room2_edited[current_row][current_column] = '-';
    current_row = current_row - 1;
}
else if(current_column == 0){
    room2_edited[current_row][current_column] = '|';
    current_column = current_column + 1;
}
else if(current_column == 41){
    room2_edited[current_row][current_column] = '|';
    current_column = current_column - 1;
}
room2_edited = room2;
system("clear");
room2_edited[current_row][current_column] ='&';
for (int i = 0; i < room2_edited.size(); i++)
{
cout << room2_edited[i] << "";}

}
else if (c == 'S') {
current_row = current_row + 1;
    if(current_row == 0){
    room2_edited[current_row][current_column] = '-';
    current_row = current_row + 1;
}
else if(current_row == 7){
    room2_edited[current_row][current_column] = '-';
    current_row = current_row - 1;
}
else if(current_column == 0){
    room2_edited[current_row][current_column] = '|';
    current_column = current_column + 1;
}
else if(current_column == 41){
    room2_edited[current_row][current_column] = '|';
    current_column = current_column - 1;
}
room2_edited = room2;
system("clear");
room2_edited[current_row][current_column] ='&';
for (int i = 0; i < room2_edited.size(); i++)
{
cout << room2_edited[i] << "";}

}
else if (c == 'D') {
current_column = current_column + 1;
    if(current_row == 0){
    room2_edited[current_row][current_column] = '-';
    current_row = current_row + 1;
}
else if(current_row == 7){
    room2_edited[current_row][current_column] = '-';
    current_row = current_row - 1;
}
else if(current_column == 0){
    room2_edited[current_row][current_column] = '|';
    current_column = current_column + 1;
}
else if(current_column == 41){
    room2_edited[current_row][current_column] = '|';
    current_column = current_column - 1;
}
room2_edited = room2;
system("clear");
room2_edited[current_row][current_column] ='&';
for (int i = 0; i < room2_edited.size(); i++)
{
cout << room2_edited[i] << "";}

}

if(c == 'E'){
    if(current_row == 3 && (current_column == 11 || current_column == 12)){
        puzzle_2_1();
}
    else if(current_row == 4 && (current_column == 9 || current_column == 10 || current_column == 11 || current_column == 12 || current_column == 13 || current_column == 14 || current_column == 15 || current_column == 16)){
        puzzle_2_1();
    }
    else if(current_row == 5 && current_column == 27) {
    puzzle_2_2();
    }
    else if((current_row == 6 && current_column == 35)){
    if (door_2()) break;
}}

}
}



