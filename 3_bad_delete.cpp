#include <iostream>

class MyString
{
 public:
  MyString() {}
	~MyString() noexcept {
    std::cout << "Deleted" << std::endl;
  }
};

int main()
{
  MyString* arr = new MyString[10];
  delete arr;
}
