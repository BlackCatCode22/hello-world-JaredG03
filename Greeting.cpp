#include <iostream>
#include <string>
int main() {
    std::string userName;

    std::cout << "Enter you name:  ";
    std::getline(std::cin, userName);

    std::cout << "Hello, " << userName << " Hope you have a Great Day !" << std::endl;

    return 0;
}