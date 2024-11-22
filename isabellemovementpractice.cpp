
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
"|         #                              |\n", // # is at (11,5)
"|                        2024            |\n", // 2024 is at (26-29,6)
"|                                  !     |\n", // ! is at (36,7)
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
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
room1[current_row][current_column] ='&';
for (int i = 0; i < room1.size(); i++)
{
cout << room1[i] << "";}
}}



