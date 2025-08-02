#include <iostream>

void print_pass_fail(char grade){
    switch(grade){
                case 'A': 
                    std::cout<< "Pass\n";
                case 'B':
                    std::cout<< "Pass\n";
                case 'C':
                    std::cout<< "Pass\n";
                case 'D':
                    std::cout<< "Fail\n";
                case 'E':
                    std::cout<< "Fail\n";
                default:
                    std::cout<< "Nothing\n";
            }
}