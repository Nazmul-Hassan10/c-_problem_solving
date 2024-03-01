#include <iostream>
#include <algorithm>

std::string maximumOddBinaryNumber(std::string s) {
    // Find the last occurrence of '1' in the string
    size_t lastOneIndex = s.find_last_of('1');

    // Sort the substring from the beginning of the string to the last '1'
    std::sort(s.begin(), s.begin() + lastOneIndex, std::greater<char>());

    return s;
}

int main() {
    std::string input;
    
    // Take input from user
    std::cout << "Enter a binary string: ";
    std::cin >> input;

    // Call the function and display the result
    std::cout << "Maximum Odd Binary Number: " << maximumOddBinaryNumber(input) << std::endl;

    return 0;
}
