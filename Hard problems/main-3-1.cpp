#include <iostream>

// Declare the external function
extern bool is_fanarray(int array[], int n);

int main() {
    int arr1[] = {1, 2, 3, 2, 1};    // fanarray
    int arr2[] = {1, 3, 2, 3, 1};    // not ascending in first half
    int arr3[] = {1, 2, 3, 4, 5};    // not palindrome

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    std::cout << "arr1 is fanarray: " << (is_fanarray(arr1, size1) ? "true" : "false") << std::endl;
    std::cout << "arr2 is fanarray: " << (is_fanarray(arr2, size2) ? "true" : "false") << std::endl;
    std::cout << "arr3 is fanarray: " << (is_fanarray(arr3, size3) ? "true" : "false") << std::endl;

    return 0;
}