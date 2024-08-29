#include <iostream>
#include <ctime>

char getPlayerChoice();

char getPlayerChoice() {
    
    char player;
    std::cout << "Rock-Paper-Scissors Game!" << '\n';

    do {
        std::cout << "Choose one of the following: " << '\n';
        std::cout << "'r' for rock" << '\n';
        std::cout << "'p' for paper" << '\n';
        std::cout << "'s' for scissors" << '\n';
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice();

char getComputerChoice() {

    srand(time(0));
    int number = rand() % 3 + 1;

    switch (number) {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
    }

    return 0;
}

void showChoice(char choice);

void showChoice(char choice) {
    switch (choice) {
    case 'r': std::cout << "Rock" << '\n';
        break;
    case 'p': std::cout << "Paper" << '\n';
        break;
    case 's': std::cout << "Scissors" << '\n';
        break;
    }
}

void winner(char player, char computer);

void winner(char player, char computer) {

    switch (player) {
    case 'r':
        if (computer == 'r') {
            std::cout << "The game is a tie!" << '\n';
        }
        else if (computer == 'p') {
            std::cout << "The computer wins!" << '\n';
        }
        else {
            std::cout << "The player wins!" << '\n';
        }
        break;

    case 'p':
        if (computer == 'r') {
            std::cout << "The player wins!" << '\n';
        }
        else if (computer == 'p') {
            std::cout << "The game is a tie!" << '\n';
        }
        else {
            std::cout << "The computer wins!" << '\n';
        }
        break;

    case 's':
        if (computer == 'r') {
            std::cout << "The computer wins!" << '\n';
        }
        else if (computer == 'p') {
            std::cout << "The player wins!" << '\n';
        }
        else {
            std::cout << "The game is a tie!" << '\n';
        }
        break;

    }
}

            int main()
            {
                
                char player;
                char computer;

                player = getPlayerChoice();
                std::cout << "Your choice: ";
                showChoice(player);

                computer = getComputerChoice();
                std::cout << "Computer's Choice: ";
                showChoice(computer);

                winner(player, computer);


                return 0;

            }