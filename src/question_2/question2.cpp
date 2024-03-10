#include "question2.h"

bool test_config()
{
    return true;
}

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

std::vector<int> get_primes(int num) {
    std::vector<int> primes;
    for (int i = 2; i <= num; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}