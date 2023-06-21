#include <iostream>

class Complex
{
 public:
  Complex() {}
	~Complex() noexcept {}
  void Print() const
  {
    std::cout << "Hello";
  }
};


Complex& SumComplex(const Complex& a, const Complex& b)
{
    a.Print();
    b.Print();
    Complex result;
    result.Print();
    return result;
}



int main()
{
  Complex a, b;
  Complex& sum = SumComplex(a, b);
  sum.Print();
}
