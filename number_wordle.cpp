#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int main() {
    //introducing the rules
    cout << "welcome to number wordle" << endl << "in this game you will be guessing a sequence of numbers untill correct";
    cout << endl << "if that didnt make sense go play real wordle and figure it out" << endl;
    
    //printing out the game board
    //idk if i want to make a board
    // unless we learn how to use colors might just be confusing for user
    vector<string> board;
    
    // the answer vector
    vector<int> answer = {1, 2, 3};
    int guesses_needed = answer.size();
    
    //stuff for user to guess
    int guessed;
    vector<int> guess;
    
    
    //asking using for the three guesses for wordle
    for (int i = 1; i <= guesses_needed; i++) {
        cout << "enter guess " << i << ": ";
        cin >> guessed;
        // cout << guessed << endl;
        guess.push_back(guessed);
    }
    
    
    // this will be used in a while loop to let user keep guessing
    int amount_correct = 0;
    
    
    while (amount_correct < guesses_needed)  {
        // amount correct gets reset to 0 after every trail run
        amount_correct = 0;
        for(int i = 0; i < guesses_needed; i++) {
            if (answer.at(i) == guess.at(i)) {
                cout << "you have the number in the " << i+1 << " postion correct" << endl;
                amount_correct++;
            }
            else {
                cout << "the number in the " << i+1 << " spot is incorrect" << endl;
                amount_correct--;
            }
        } // ends for loop
        
        //allows user to guess again
        if (amount_correct != 3) {
            //asking using for the three guesses for wordle
            for (int i = 1; i <= answer.size(); i++) {
                cout << "enter guess " << i << ": ";
                cin >> guessed;
                guess.push_back(guessed);
            }
        }  // ends while loop
        
    }
    cout << "yay you found the super easy password";
    
}
