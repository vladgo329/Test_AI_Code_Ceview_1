#include <iostream>

int main() {

    char* pw = new char[5];
    std::cout << "Enter your pw: ";
    std::cin >> pw;

    std::cout << *pw << std::endl;
}
