
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(std::time(nullptr));

    // Define the options
    const std::string ROCK = "rock";
    const std::string PAPER = "paper";
    const std::string SCISSORS = "scissors";

    // Get the user's choice
    std::string userChoice;
    std::cout << "Enter your choice (rock, paper, or scissors): ";
    std::cin >> userChoice;

    // Generate the computer's choice
    int computerChoice = std::rand() % 3; // 0 = rock, 1 = paper, 2 = scissors

    // Determine the winner
    if (userChoice == ROCK) {
        if (computerChoice == 0) {
            std::cout << "Tie!" << std::endl;
        } else if (computerChoice == 1) {
            std::cout << "Computer wins!" << std::endl;
        } else {
            std::cout << "You win!" << std::endl;
        }
    } else if (userChoice == PAPER) {
        if (computerChoice == 0) {
            std::cout << "You win!" << std::endl;
        } else if (computerChoice == 1) {
            std::cout << "Tie!" << std::endl;
        } else {
            std::cout << "Computer wins!" << std::endl;
        }
    } else if (userChoice == SCISSORS) {
        if (computerChoice == 0) {
            std::cout << "Computer wins!" << std::endl;
        } else if (computerChoice == 1) {
            std::cout << "You win!" << std::endl;
        } else {
            std::cout << "Tie!" << std::endl;
        }
    } else {
        std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
