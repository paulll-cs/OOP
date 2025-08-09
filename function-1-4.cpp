#include <iostream>

void print_scaled(int array[3][3], int scale) {
    int new_list[9];
    for (int i = 0; i < scale; i++) {
        for (int j = 0; j < scale; j++) {
            new_list[i * scale + j] = array[i][j] * scale;
        }
    }
    for (int i = 0; i < scale; i++) {
        for (int j = 0; j < scale; j++) {
            std::cout << new_list[i * scale + j] << " ";
        }
        std::cout << "\n";
    }
}