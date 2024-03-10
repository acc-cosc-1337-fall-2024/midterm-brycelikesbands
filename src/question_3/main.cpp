#include <iostream>
#include <string>
#include "question3.h"

int main()
{
char choice;
    do {
        int num;
        std::cout << "Enter an integer (1-512) to convert to hexadecimal: ";
        std::cin >> num;

        if (num < 1 || num > 512) {
            std::cout << "Number must be in the range of 1 to 512. Please try again." << std::endl;
            continue;
        }

        std::string hex = decimal_to_hex(num);
        std::cout << "Hexadecimal representation of " << num << " is: " << hex << std::endl;

        std::cout << "Do you want to continue? (yes/no): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}