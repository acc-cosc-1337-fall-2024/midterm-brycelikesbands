#include "question1.h"
#include <algorithm>

bool test_config()
{
    return true;
}
int find_gcd(int num1, int num2) {
    if (num1 < 1 || num2 < 1 || num1 > 200 || num2 > 200) {
        return -1; // Numbers out of range
    }
    int gcd = 1;
    for (int i = 1; i <= std::min(num1, num2); ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}