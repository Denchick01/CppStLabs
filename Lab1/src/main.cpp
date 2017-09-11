#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <regex>

int main () {
    long long unsigned int input_value = 0;
    std::string input_string;

    std::cin >> input_string;

    if (std::cin.fail()) {
        std::cout << 0;
	return 0;
    }

    std::regex pat("(\\+|0)?[[:digit:]]+");

    if (!std::regex_match(input_string, pat)) {
        std::cout << 0;
        return 0;
    }

    input_value = std::stoll(input_string);


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
