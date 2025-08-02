#include <iostream>

// Declaration of the function defined in count.cpp
extern int num_count(int array[], int n, int number);

int main() {
    int nums[] = {1, 2, 3, 2, 4, 2, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 2;

    int count = num_count(nums, size, target);
    std::cout << "The number " << target << " appears " << count << " times in the array.\n";

    return 0;
}