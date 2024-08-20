#include <iostream>
#include <ctime>
#include <string>

int main()
{

    int number;
    int myGuess;
    int myTries;

    srand(time(NULL));
    number = (rand() % 1000) + 1;

    std::cout << "********** GUESS THE NUMBER **********\n";

    do {
        std::cout << "Please write a number between 1 and 1000: ";
        std::cin >> myGuess;
        myTries++;

        if (myGuess > number) {
            std::cout << "The number you have written is too high!\n";
        }
        else if (myGuess < number)
            std::cout << "The number you have written is too low!\n";
        else {
            std::cout << "You guessed the number correctly! Your number of tries are: " << myTries << '\n';
        }
    } while (myGuess != number);

    std::cout << "************************************\n";

    return 0;

}

