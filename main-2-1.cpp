#include <iostream>

// Declare the external function
extern int min_element(int array[], int n);

int main() {
    int arr[] = {42, 17, 93, 58, 10, 73};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minimum = min_element(arr, size);
    std::cout << "Minimum element in the array is: " << minimum << std::endl;

    return 0;
}