// main_count_digits.cpp
#include <iostream>

extern void count_digits(int array[4][4]);


int main() {
    int digit_array[4][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 0, 1},
        {2, 3, 4, 5}
    };

    std::cout << "Digit counts: ";
    count_digits(digit_array);
    std::cout << std::endl;

    return 0;
}
