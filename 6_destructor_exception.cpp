#include <iostream>
#include <stdexcept>

class A {
public:
   A() {}
   ~A() noexcept(false) {
      writeToLog();
   }

   void writeToLog() {
      int* a = new int[20];
      delete[] a;
   }
};

int main() {
   try {
      A a1;
      A a2;
   } catch (const std::exception& e) {
      std::cout << "Exception caught: " << e.what() << std::endl;
   }

   return 0;
}
