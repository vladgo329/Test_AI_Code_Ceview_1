#include <iostream>
#include <string>

class A {
public:
    virtual std::string GetName() const { return "A"; }
};

class B : public A {
public:
    std::string GetName() const override { return "B"; }
};

void func1(A a) {
    std::string name = a.GetName();
    std::cout << "Name: " << name << std::endl;
}

int main() {
    B b;
    func1(b);
    return 0;
}
