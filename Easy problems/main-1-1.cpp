#include <iostream>

extern int array_sum(int array[], int n);

int main() {
    int numbers[] = {5, 10, 15, 20};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int result = array_sum(numbers, size);
    std::cout << "The sum of the array is: " << result << std::endl;

    return 0;
}