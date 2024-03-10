#include <iostream>
#include "question4.h"

int main()
{
char choice;
    do {
        // Prompt the user to roll the die
        std::cout << "Press Y to roll the die: ";
        std::cin >> choice;

        if (choice == 'Y' || choice == 'y') {
            // Roll the die and display the result
            int result = roll_die();
            std::cout << "You rolled: " << result << std::endl;
        } else {
            std::cout << "Invalid input. Please try again." << std::endl;
        }

        // Prompt the user to continue rolling the die
        std::cout << "Do you want to roll again? (Y/N): ";
        std::cin >> choice;
    } while (choice == 'Y' || choice == 'y');


    return 0;
}