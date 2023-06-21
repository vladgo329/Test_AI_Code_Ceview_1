#include <iostream>

class ClassA
{
  public:
  void print() {std::cout << "Hello world";}
};

void foo()
{
  int* n = new int[2];
  delete[] n;
}


int main()
{
  ClassA *a = new ClassA;
  foo();
  a->print();
  delete a;
  return 0;
}
