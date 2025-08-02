#include <iostream>

// Declare the function defined in mean.cpp
extern double array_mean(int array[], int n);

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    double mean = array_mean(nums, size);
    std::cout << "Mean of the array is: " << mean << std::endl;

    return 0;
}