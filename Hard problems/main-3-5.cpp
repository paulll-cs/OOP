#include <iostream>

// Declare the external function
extern double sum_even(double array[], int n);

int main() {
    double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(arr) / sizeof(arr[0]);

    double result = sum_even(arr, size);
    std::cout << "Sum of even-indexed elements: " << result << std::endl;

    return 0;
}