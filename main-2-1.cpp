// main_base_conversion.cpp
#include <iostream>
#include <string>

extern "C" {
    std::string base_10_to_base_2(std::string n_base10, std::string n_base2 = "");
    void print_binary_str(std::string decimal_number);
}

int main() {
    std::string decimal_number = "10"; // Example decimal number
    std::cout << "Binary representation of " << decimal_number << " is: ";
    print_binary_str(decimal_number);
    std::cout << std::endl;

    return 0;
}
