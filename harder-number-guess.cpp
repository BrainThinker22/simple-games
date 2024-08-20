#include <iostream>
#include <ctime>
#include <string>

int main() {
	int number;
	int myGuess;
	int myTries = 0;

	srand(time(NULL));
	number = (rand() % 1000) + 1;

	std::cout << "****** HARD LEVEL OF GUESS THE NUMBER GAME! ******\n";

	do {
		std::cout << "Please write a number between 1 and 1000: ";
		std::cin >> myGuess;
		myTries++;

		if (myGuess > number) {
			std::cout << "Your guessed number is too high! TRY AGAIN!\n";
		}
		else if (myGuess < number) {
			std::cout << "Your guessed number is too low! TRY AGAIN!\n";
		}
		else {
			std::cout << "CORRECT GUESS! Your number of guesses is: " << myTries << '\n';
			break;
		}

		if (myTries == 10) {
			std::cout << "You've used all 10 tries! The correct number was: " << number << '\n';
			break;
		}

	} while (myGuess != number);

	std::cout << "************************************\n";

	return 0;
}