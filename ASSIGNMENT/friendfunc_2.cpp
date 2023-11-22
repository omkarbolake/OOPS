#include <iostream>
using namespace std;
//overloading an operator
class ComplexNumber
{
private:
  double real;
  double imaginary;

public:
  // Default constructor
  ComplexNumber() : real(0), imaginary(0) {}

  // Parameterized constructor
  ComplexNumber(double r, double i) : real(r), imaginary(i) {}

  // Accessor functions
  double getReal() const { return real; }
  double getImaginary() const { return imaginary; }

  // Overloaded '+' operator
  friend ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)
  {
    return ComplexNumber(c1.real + c2.real, c1.imaginary + c2.imaginary);
  }

  // Print function
  void print() const
  {
    cout << "Real part: " << real << ", Imaginary part: " << imaginary << endl;
  }
};

int main()
{
  ComplexNumber c1(2, 3);
  ComplexNumber c2(4, 5);

  ComplexNumber c3 = c1 + c2; // Overloaded '+' operator
  c3.print();

  return 0;
}
