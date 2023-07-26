// GuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Number Guessing Game\nGuess the number between 1 and 100\n";

    int secretNum = rand() % 100 + 1;
    bool correctGuess = false;
    int guess = 0;
    int attempts = 0;


    while (!correctGuess) {
        std::cin >> guess;
        if (guess == secretNum) {
            correctGuess = true;
        }
        else if(guess < secretNum) {
            std::cout << "Too low, Try again!\n";
        }
        else {
            std::cout << "Too High, Try again!\n";
        }
        attempts++;
    }

    std::cout << "Your guess of " << guess << " was correct!\n"
              << "It took you "<< attempts <<" attempts";
}
