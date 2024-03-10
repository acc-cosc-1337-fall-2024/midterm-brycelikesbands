#include <iostream>
#include "question2.h"

int main()
{
char choice;
    do {
        int num;
        std::cout << "Enter a number (1-60) to find prime numbers up to that number: ";
        std::cin >> num;

        if (num < 1 || num > 60) {
            std::cout << "Number must be in the range of 1 to 60. Please try again." << std::endl;
            continue;
        }

        std::vector<int> primes = get_primes(num);

        std::cout << "Prime numbers up to " << num << " are: ";
        for (int prime : primes) {
            std::cout << prime << " ";
        }
        std::cout << std::endl;

        std::cout << "Do you want to continue? (yes/no): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}