// main_binary_to_int.cpp
#include <iostream>

extern "C" {
    int binary_to_int(int binary_digits[], int number_of_digits);
}

int main() {
    int binary_digits[] = {1, 0, 1, 0}; // Example binary number (10 in decimal)
    int number_of_digits = sizeof(binary_digits) / sizeof(binary_digits[0]);

    int decimal_value = binary_to_int(binary_digits, number_of_digits);
    std::cout << "Decimal value of binary number is: " << decimal_value << std::endl;

    return 0;
}
