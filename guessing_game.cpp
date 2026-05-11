#include <iostream>
using namespace std;

int main() {
    
    int chosenNumber = 7;     
    int userGuess    = 0;       
    int guesses[100];           
    int guessCount   = 0;       
    
    cout << "==============================" << endl;
    cout << "   Number Guessing Game       " << endl;
    cout << "==============================" << endl;
   

    
    while (userGuess != chosenNumber) {
        cout << "Enter your guess: ";
        cin  >> userGuess;
        guesses[guessCount] = userGuess;
        guessCount++;

        
        if (userGuess > chosenNumber) {
        	cout << "Too high! Try again." << endl;
        } 
		else if (userGuess < chosenNumber) {
        	cout << "Too low!  Try again." << endl;
        } 
		else {
        	cout << "Correct! Well done!" << endl;
        }
    }

    
    cout << endl;
    cout << "==============================" << endl;
    cout << "  Your guesses (" << guessCount << " total):  " << endl;
    cout << "==============================" << endl;

    for (int i = 0; i < guessCount; i++) {
        cout << "  Attempt " << (i + 1) << ": " << guesses[i] << endl;
    }

    cout << "------------------------------" << endl;
    cout << "Game over. Thanks for playing!" << endl;

    return 0;
}
