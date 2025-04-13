#include <iostream>
using namespace std;

int main (){
  int userGuess;
  int computerGuess;

  cout << "Guess a number between 1 and 10";
  cin >> userGuess;

    if (userGuess == computerGuess) {
        cout << "You guessed it!" << endl;
    } else {
        cout << "Nope! The number was" << computerGuess << endl;
    }

    return 0; 
}

