#include <iostream>

class MyString : public std::string
{
	~MyString() {}
};

int main()
{
	std::string *s = new MyString();
	delete s;
}
