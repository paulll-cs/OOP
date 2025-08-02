#include <iostream>

// Declare the external function
extern int sum_two_arrays(int array1[], int array2[], int n);

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    int sum = sum_two_arrays(arr1, arr2, size);
    std::cout << "Sum of both arrays: " << sum << std::endl;

    return 0;
}