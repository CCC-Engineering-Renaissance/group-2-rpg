//#include "colors.h" // If you want to make your map look pretty and use colors :)
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<cstdlib>
#include<ctime>
//#include<conio.h>
using namespace std;


//preprocesor

void date();
void thing (){
    cout << "whatever" << endl;
}


void game_map()
{
vector<string> room1, room2, room3, room4, room5;
room1 = {

"------------------------------------------\n",
"|                                        |\n",
"|                                        |\n",
"|                                        |\n",
"|                                        |\n",
"|         *              2024            |\n",
"|                                  !     |\n",
"------------------------------------------\n",
};
room2 =
{
"------------------------------------------\n",
"|                                        |\n",
"|                                        |\n",
"|          le                            |\n",
"|        painting                        |\n",
"|                          O             |\n",
"|                                  !     |\n",
"------------------------------------------\n"
};
room3 =
{
"------------------------------------------\n",
"|                                        |\n",
"|                                        |\n",
"|                                        |\n",
"|         @                              |\n",
"|         |*                             |\n",
"|                                  !     |\n",
"------------------------------------------\n",
};
room4 =
{
"------------------------------------------\n",
"|                                        |\n",
"|                                        |\n",
"|                          =             |\n",
"|                                        |\n",
"|           ~                            |\n",
"|                                  !     |\n",
"------------------------------------------\n",
};
room5 =
{
"     |                                    \n",
"    -0-                         /          \n",
"     |          *               o      *     \n",
"                              /            \n",
"        *                             *     \n",
"           |              *                 \n",
"         --*--            *                    \n",
"           |                          *     \n",
};
for (int i = 0; i < room1.size(); i++)
{
cout << room1[i] << "";

}
for (int i = 0; i < room2.size(); i++)
{
cout << room2[i] << "";
}
for (int i = 0; i < room3.size(); i++)
{
cout << room3[i] << "";

}
for (int i = 0; i < room4.size(); i++)
{
cout << room4[i] << "";
}
for (int i = 0; i < room5.size(); i++)
{
cout << room5[i] << "";
}

}

void game_player()
{
const char the_player = '&';
}

void player_pos()
{
game_map();
game_player();
vector<int> player_poss = { 0,0 };

}


void player_controls()
{
game_map();
game_player();
// the player is not in the map yet
//so basically, we need to put the player in the map, and have him move when they click wasd
// I think the way that you should go about doing this is to have them move over one coloumn or whatever
// just like it is done in dad bod.
char key = cin.get();

while(true)
{
if (key == 'w')
{
cout << "up\n";
continue;
}
else if (key == 'a')
{
cout << "left\n";
continue;
}
else if (key == 's')
{
cout << "down\n";
continue;
}
else if (key == 'd')
{
cout << "right\n";
continue;
}
else
{
cout << "Invalid Input\n";
continue;
}
}




}


int main()
{
player_controls();
return 0;
system("pause");
}


void date() {

  system("clear");
  // working on alligning this
  cout << setw(20)<< "The date is November 9, 2024. The day after the Engineering Renaissance assignment is due." << endl << right;
  cout << right << setw(50) << " You wake up in a cold dark room with no doors or windows in sight." << endl;
  cout << setw(75) << right << "Also you can suddenly fly. I can't explain that one yet.";
}

