#include <iostream>

int main()
{
    std::cout << "Enter a num: ";
    int in;
    std::cin >> in;

    if (in > 0) 
    {
        for (int i = 0; i < 5; i++) 
        {
            std::cout << "Hello, World!" << std::endl;
        }
    } else 
    {
        for (int i = 0; i < 5; i++) 
        {
            std::cout << "Hello, World!" << std::endl;
        }
    }

    return 0;
}