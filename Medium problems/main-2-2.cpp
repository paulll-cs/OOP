#include <iostream>

// Declare the external function
extern int max_element(int array[], int n);

int main() {
    int arr[] = {42, 17, 93, 58, 10, 73};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maximum = max_element(arr, size);
    std::cout << "Maximum element in the array is: " << maximum << std::endl;

    return 0;
}