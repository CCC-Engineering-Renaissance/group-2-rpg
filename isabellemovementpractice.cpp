
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include"colors.h"
using namespace std;
int main() {
vector<string> room1;
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
room1[current_row][current_column] ='&';
for (int i = 0; i < room1.size(); i++)
{
cout << room1[i] << "";}
while (true){
char player_movement;
cin >> player_movement;
char c = toupper(player_movement);
if (c == 'W') {
room1[current_row][current_column] =' ';
current_row = current_row - 1;
}
else if (c == 'A') {
room1[current_row][current_column] =' ';
current_column = current_column - 1;
}
else if (c == 'S') {
room1[current_row][current_column] =' ';
current_row = current_row + 1;
}
else if (c == 'D') {
room1[current_row][current_column] =' ';
current_column = current_column + 1;
}
if(current_row == 0){
    room1[current_row][current_column] = '-';
    current_row = current_row + 1;
}
else if(current_row == 7){
    room1[current_row][current_column] = '-';
    current_row = current_row - 1;
}
else if(current_column == 0){
    room1[current_row][current_column] = '|';
    current_column = current_column + 1;
}
else if(current_column == 41){
    room1[current_row][current_column] = '|';
    current_column = current_column - 1;
}
if(!(current_row == 4 && current_column == 10)){
    room1[4][10] = '#';
}
if(!(current_row == 5 && current_column == 25)){
    room1[5][25] = '2';
}
if(!(current_row == 5 && current_column == 27)){
    room1[5][27] = '2';
}
if(!(current_row == 5 && current_column == 26)){
    room1[5][26] = '0';
}
if(!(current_row == 5 && current_column == 28)){
    room1[5][28] = '4';
}
if(!(current_row == 6 && current_column == 35)){
    room1[6][35] = '!';
}
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
room1[current_row][current_column] ='&';
for (int i = 0; i < room1.size(); i++)
{
cout << room1[i] << "";}
}
}



