// main_palindrome_sum.cpp
#include <iostream>

extern "C" {
    int sum_if_palindrome(int integers[], int length);
}

int main() {
    int integers[] = {1, 2, 3, 2, 1}; // Example palindrome array
    int length = sizeof(integers) / sizeof(integers[0]);

    int sum = sum_if_palindrome(integers, length);
    if (sum == -1) {
        std::cout << "Array length is invalid." << std::endl;
    } else if (sum == -2) {
        std::cout << "Array is not a palindrome." << std::endl;
    } else {
        std::cout << "Sum of palindrome array elements: " << sum << std::endl;
    }

    return 0;
}
