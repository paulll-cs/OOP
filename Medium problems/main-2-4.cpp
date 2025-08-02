#include <iostream>

// Declare the external function
extern bool is_ascending(int array[], int n);

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "arr1 is ascending: " << (is_ascending(arr1, size1) ? "true" : "false") << std::endl;
    std::cout << "arr2 is ascending: " << (is_ascending(arr2, size2) ? "true" : "false") << std::endl;

    return 0;
}