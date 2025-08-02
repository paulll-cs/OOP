#include <iostream>

// Declare the external function
extern double weighted_average(int array[], int n);

int main() {
    int arr[] = {2, 2, 5, 5, 5, 9, 9, 9, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    double avg = weighted_average(arr, size);
    std::cout << "Weighted average of the array is: " << avg << std::endl;

    return 0;
}