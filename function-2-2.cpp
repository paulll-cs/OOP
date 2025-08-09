#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int decimal = 0;
    for (int i = 0; i < number_of_digits; i++) {
        decimal += binary_digits[number_of_digits - 1 - i] * pow(2, i);
    }
    return decimal;
}