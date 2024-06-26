#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int secretNumber, guess, numTries = 0;
  
    srand(time(0));
    secretNumber = rand() % 1000 + 1;

    cout<<"I have a number between 1 and 1000."<<endl;
    cout<<"Can you guess my number?"<<endl;

    do {
        cout<<"Please type your guess: ";
        cin>>guess;

        numTries++; 

        if (guess == secretNumber) {
            cout << "Excellent! You guessed the number in " << numTries << " tries!" << endl;
        } else if (guess < secretNumber) {
            cout << "Too low. Try again." << endl;
        } else {
            cout << "Too high. Try again." << endl;
        }
    } while (guess != secretNumber);

    char playAgain;
    cout << "Would you like to play again (y or n) : ";
    cin >> playAgain;

    if (playAgain == 'y' || playAgain == 'Y') {
        main(); 
    } else {
        cout << "Thanks for playing!" << endl;
    }

    return 0;
}
