#include <iostream>

// Declare the external function
extern int median_array(int array[], int n);

int main() {
    int arr[] = {7, 1, 5, 3, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int med = median_array(arr, size);
    if (med == 0) {
        std::cout << "Invalid input: array size must be positive and odd." << std::endl;
    } else {
        std::cout << "Median element is: " << med << std::endl;
    }

    return 0;
}