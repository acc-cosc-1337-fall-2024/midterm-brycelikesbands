#include <iostream>
#include "question1.h"

using namespace std;

int main()
{
int num1, num2;
    char choice;
    do {
        cout << "Enter the first integer (1-200): ";
        cin >> num1;
        cout << "Enter the second integer (1-200): ";
        cin >> num2;
        if (num1 < 1 || num1 > 200 || num2 < 1 || num2 > 200) {
            cout << "Numbers must be in the range of 1 to 200. Please try again." << endl;
            continue;
        }
        int gcd = find_gcd(num1, num2);
        if (gcd == -1) {
            cout << "Numbers out of range. Please try again." << endl;
        } else {
            cout << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << gcd << endl;
        }
        cout << "Do you want to continue? (yes/no): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}