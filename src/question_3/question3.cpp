#include "question3.h"

bool test_config()
{
    return true;
}

#include "question3.h"

std::string decimal_to_hex(int num) {
    if (num < 0 || num > 512) {
        return "Number must be in the range of 0 to 512.";
    }

    std::string hex;
    while (num > 0) {
        int remainder = num % 16;
        if (remainder < 10) {
            hex = char('0' + remainder) + hex;
        } else {
            hex = char('A' + remainder - 10) + hex;
        }
        num /= 16;
    }

    return hex.empty() ? "0" : hex;
}