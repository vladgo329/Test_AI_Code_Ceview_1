#include <iostream>

// Bad naming - Inconsistent and unclear variable and function names
int main() {
    int* value_num_1 = new int;
    *value_num_1 = 5;

    int* value_num_2 = new int;
    *value_num_2 = 10;

    std::cout << *value_num_1 + *value_num_2;
}
