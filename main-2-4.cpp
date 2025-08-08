// main_sum_min_max.cpp
#include <iostream>

extern "C" {
    int sum_min_max(int integers[], int length);
}

int main() {
    int integers[] = {3, 5, 1, 9, 2}; // Example array
    int length = sizeof(integers) / sizeof(integers[0]);

    int sum = sum_min_max(integers, length);
    if (sum == -1) {
        std::cout << "Array length is invalid." << std::endl;
    } else {
        std::cout << "Sum of minimum and maximum values in the array: " << sum << std::endl;
    }

    return 0;
}
