
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include"colors.h"
#include"room_1.h"
#include"room_2.h"
using namespace std;
int main() {
vector<string> room1;
vector<string> room1_edited;
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
set_raw_mode(true);
while (true){
char player_movement;
player_movement = quick_read();
char c = toupper(player_movement);
if (c == 'W') {
current_row = current_row - 1;
    if(current_row == 0){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row + 1;
}
room1_edited = room1;
system("clear");
room1_edited[current_row][current_column] ='&';
for (int i = 0; i < room1_edited.size(); i++)
{
cout << room1_edited[i] << "";}

}
else if (c == 'A') {
current_column = current_column - 1;
    if(current_row == 0){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row + 1;
}
else if(current_row == 7){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row - 1;
}
else if(current_column == 0){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column + 1;
}
else if(current_column == 41){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column - 1;
}
room1_edited = room1;
system("clear");
room1_edited[current_row][current_column] ='&';
for (int i = 0; i < room1_edited.size(); i++)
{
cout << room1_edited[i] << "";}

}
else if (c == 'S') {
current_row = current_row + 1;
    if(current_row == 0){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row + 1;
}
else if(current_row == 7){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row - 1;
}
else if(current_column == 0){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column + 1;
}
else if(current_column == 41){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column - 1;
}
room1_edited = room1;
system("clear");
room1_edited[current_row][current_column] ='&';
for (int i = 0; i < room1_edited.size(); i++)
{
cout << room1_edited[i] << "";}

}
else if (c == 'D') {
current_column = current_column + 1;
    if(current_row == 0){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row + 1;
}
else if(current_row == 7){
    room1_edited[current_row][current_column] = '-';
    current_row = current_row - 1;
}
else if(current_column == 0){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column + 1;
}
else if(current_column == 41){
    room1_edited[current_row][current_column] = '|';
    current_column = current_column - 1;
}
room1_edited = room1;
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



