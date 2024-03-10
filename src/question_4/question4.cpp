//
bool test_config()
{
    return true;
}

#include <cstdlib> // for rand function
#include <ctime>   // for time function

int roll_die() {
    // Seed the random number generator with current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    // Generate a random number between 1 and 6
    return (std::rand() % 6) + 1;
}