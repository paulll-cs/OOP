#include <string>
#include <iostream>

std::string binary_addition(int base_2_in_1,int base_2_in_2,std::string base_2_out ="",int carry = 0){
    std::string remainder = "";
    int result;
    int carry;

    if (base_2_in_1/10 == 0|| base_2_in_2/10 == 0){
        return "1" + base_2_out;
    }

    int last_digit_1 = base_2_in_1%10;
    int last_digit_2 = base_2_in_2%10;

    result = last_digit_1+last_digit_2+carry;
    remainder = std::to_string(result);
    if (carry != 0){
        carry = result-1;
    }else{
        carry = 0;
    }

    int last_digit_removed_1 = (base_2_in_1 - last_digit_1)/10;
    int last_digit_removed_2 = (base_2_in_2 - last_digit_2)/10;

    return binary_addition(last_digit_removed_1,last_digit_removed_2,remainder + base_2_out,carry);
}

int main(void)
{
    std::cout<<"Enter 2 binary numbers:\n";
    
    int binary_1=0;
    int binary_2=0;
    
    std::cin>>binary_1;
    std::cin>>binary_2;
    
    std::cout<<"Result: "<< binary_addition(binary_1,binary_2);

    return 0;
}
