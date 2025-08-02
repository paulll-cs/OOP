#include <iostream>

// Declare the external function
extern int count_even(int n);

int main() {
    int limit = 10;
    int evenCount = count_even(limit);
    std::cout << "Number of even numbers between 1 and " << limit << ": " << evenCount << std::endl;

    return 0;
}