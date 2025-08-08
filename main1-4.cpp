// main_print_scaled.cpp
#include <iostream>

extern "C" {
    void print_scaled(int array[3][3], int scale);
}

int main() {
    int scale = 2;
    int scale_array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Scaled array (scale = " << scale << "):" << std::endl;
    print_scaled(scale_array, scale);

    return 0;
}
