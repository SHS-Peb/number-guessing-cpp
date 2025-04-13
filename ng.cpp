#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
  int userGuess;
  int computerGuess;

  srand(time(0));
  computerGuess = (rand() % 10) + 1;

  cout << "Guess a number between 1 and 10: ";
  cin >> userGuess;

    if (userGuess == computerGuess) {
        cout << "You guessed it!" << endl;
    } else {
        cout << "Nope! The number was " << computerGuess << endl;
    }

    return 0; 
}

