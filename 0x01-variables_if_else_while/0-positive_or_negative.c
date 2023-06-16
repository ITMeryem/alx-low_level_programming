#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
// Seed the random number generator with the current time
std::srand(static_cast<unsigned int>(std::time(nullptr)));
// Generate a random number between -100 and 100
int n = std::rand() % 201 - 100;
// Print the generated number
std::cout << "The number is: " << n << std::endl;
// Check if the number is positive, negative, or zero
if (n > 0) {
std::cout << "is positive" << std::endl;
} else if (n < 0) {
std::cout << "is negative" << std::endl;
} else {
std::cout << "is zero" << std::endl;
}
return 0;
}
