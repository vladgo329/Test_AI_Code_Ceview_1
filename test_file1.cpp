#include <iostream>

// Bad naming - Inconsistent and unclear variable and function names
int main() {
    int* num1 = new int;
    *num1 = 5;

    int* num2 = new int;
    *num2 = 10;

    // Memory leak - Forgot to delete num1 and num2

    std::cout << "Enter a num: ";
    int in;
    std::cin >> in;

    if (in > 0) {
        for (int i = 0; i < 3; i++) {
            std::cout << "Hello, World!" << std::endl;
        }
    } else {
        for (int i = 0; i < 5; i++) {
            std::cout << "Hello, World!" << std::endl;
        }
    }

    // Duplicated code - Similar code blocks for positive and non-positive input

    char* pw = new char[20];
    std::cout << "Enter your pw: ";
    std::cin >> pw;

    // Insecure - Using char array for password without secure input method

    std::cout << "Access granted!" << std::endl;

    // Bad design - No proper code structure, no functions or classes

    return 0;
}
