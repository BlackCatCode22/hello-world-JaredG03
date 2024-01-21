#include <iostream>

int main() {
    int numBrothers, numSisters;

    std::cout << "Enter the number of brothers you have: ";
    std::cin >> numBrothers;

    std::cout << "Enter the number of sisters you have: ";
    std::cin >> numSisters;

    int totalSiblings = numBrothers + numSisters;

    std::cout << "You have " <<numBrothers << " brothers and " <<numSisters << " sisters." << std::endl;
    std::cout << "The total number of siblings you have is: " <<totalSiblings << std::endl;

    return 0;
    
}