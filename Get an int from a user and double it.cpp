#include<iostream>

int main() {
    int userInput;

    std::cout << "Enter a number: ";

    std::cin >> userInput;

    int result = userInput * 2;

    std::cout << "Double of "  <<  userInput << " is: " <<  result << std::endl;

    return 0;

}
