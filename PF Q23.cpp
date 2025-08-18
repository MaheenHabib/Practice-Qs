#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void showInstructions() {
    cout << "Welcome to the Guessing Game!\n";
    cout << "The computer will think of a number between 1 and 100.\n";
    cout << "You have 4 attempts to guess the number.\n";
    cout << "Hints will be provided if your guess is too high or too low.\n";
    cout << "Good luck!\n\n";
}

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess, attempts = 4;

    showInstructions();

    for (int i = 0; i < attempts; i++) {
        cout << "Attempt " << i + 1 << ": Enter your guess: ";
        cin >> guess;

        if (guess == number) {
            cout << "Congratulations! You guessed the number correctly.\n";
            break;
        } else if (guess < number) {
            cout << "Your guess is too low.\n";
        } else {
            cout << "Your guess is too high.\n";
        }

        if (i == attempts - 1) {
            cout << "Sorry! You've used all attempts. The number was: " << number << endl;
        }
    }

    char choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        main();
    } else {
        cout << "Thanks for playing! Goodbye!\n";
    }

    return 0;
}