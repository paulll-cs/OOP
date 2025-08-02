#include <iostream>

// Declare the external function
extern int count_evens(int n);

int main() {
    int limit = 10;
    int evenCount = count_evens(limit);
    std::cout << "Number of even numbers between 1 and " << limit << ": " << evenCount << std::endl;

    return 0;
}