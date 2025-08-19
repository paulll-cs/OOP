#include <iostream>
using namespace std;


int* readNumbers() {
    int length = 5; 
    int* array = new int[length];

    for (int i = 0; i < length; i++) {
        cout << "Enter an integer:\n";
        cin >> array[i];
    }

    return array; 
}


void printNumbers(int* numbers, int length) {
    for (int i = 0; i < length; i++) {
        cout << i + 1 << " " << numbers[i] << "\n";
    }
}


bool equalsArray(int* numbers1, int* numbers2, int length) {
    if (length < 1) return false;

    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }
    return true;
}