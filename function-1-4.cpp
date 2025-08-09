#include <iostream>

void print_summed(int array1[3][3], int array2[3][3]) {
    int new_list[9];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            new_list[i * 3 + j] = array1[i][j] + array2[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << new_list[i * 3 + j] << " ";
        }
        std::cout << "\n";
    }
}