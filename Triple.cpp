#include <iostream>

int main() {
    int userInput;

std::cout << "Enter a number: ";

std::cin >> userInput;

int result = userInput * 3;

std::cout << " Three times "  << userInput <<  " is: " <<result << std::endl;

return 0;
}