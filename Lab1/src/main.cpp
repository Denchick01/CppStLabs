#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

int main () {
    long long unsigned int input_value = 0;
    std::string input_string;

    std::cin >> input_string;

    if (std::cin.fail()) {
        std::cout << 0;
	return 0;
    }

    if (input_string.find_first_not_of("1234567890") != std::string::npos) {
        std::cout << 0;
        return 0;
    }

    input_value = atol(input_string.c_str());


    if (fmodl (sqrtl(8 * input_value + 1), 1)) {
        std::cout << 0;
	return 0;
    }

    long double des = 1 - 8 * (-input_value);

    long double value_num = 0;

    if (des >= 0) { 
        value_num = (-1 + sqrtl(des)) / 2;
    }
    else {
	std::cout << 0;
	return 0;
    }

    if (fmodl (value_num, 1)) {
	std::cout << 0;
	return 0;
    }

    std::cout << value_num << std::endl;

}
