#include <iostream>
using namespace std;


int* readNumbers();
bool equalsArray(int* numbers1, int* numbers2, int length);

int main() {
    int length = 5; 

    cout << "Enter numbers for first array:\n";
    int* arr1 = readNumbers();

    cout << "Enter numbers for second array:\n";
    int* arr2 = readNumbers();

    bool result = equalsArray(arr1, arr2, length);

    cout << (result ? "true" : "false") << "\n";

    delete[] arr1;
    delete[] arr2;

    return 0;
}