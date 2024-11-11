/*
The code currently only tells the user if a number is in the correct place or not
once all places are correct it prints yay, and the the programs ends

notes:
 * once we figure out map we can convert this into a function easily
 * possibly make a board and line up guesses like real wordle
     however we might need colors as to not confuse color
 * maybe additionally add a feature to tell user if the number they added exist within the answer but its just in wrong spot

 (idk why this dont work on VS code sorry isabelle if u try running it, i had used xcode to run and test it)
 - mason
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int main() {
    //creating the vector for the answer
    vector<int> answer = {1, 2 ,3};
    
    //getting size of vector to use in for loops
    //so we can chnage amount of numbers answe has later
    long int size;
    size = answer.size();
    
    //allowig user to input a guess
    vector<int> users_guess(size);
    
    //temp varaible to push numbers into a vector
    int temp;
    cout << "enter 3 numbers" << endl;
    for (int i = 0;  i < size; i++) {
        cout << "number " << i+1 << " : ";
        cin >> temp;
        users_guess.at(i) = temp;
        
    }
    // varaible to check how many values match
    int correct_answers = 0;

    //while loop getting user to keep trying till there correct

    while (correct_answers != size) {
    for (int i = 0; i < size; i++) {
        if (answer.at(i) == users_guess.at(i)) {
            cout << "the " << i + 1 << " number is correct" << endl;
            // adding 1 to correct answer to see if it matches size at end of loop
            correct_answers++;
        }
        else {
            cout << "the " << i + 1 << " number is incorrect" << endl;
        }
    }
        if (correct_answers != size) {
            //clearing vector
            for(int i = 0; i < size; i++) {
                users_guess.at(i) = 0;
            }
            // allow user to retry
            cout << "try again" << endl;
            for (int i = 0;  i < size; i++) {
                cout << "number " << i+1 << " : ";
                cin >> temp;
                users_guess.at(i) = temp;
            }
            //reset amount user got correct back to 0
            correct_answers = 0;
        }
    }
    cout << "yay" << endl;
}
