#include<iostream>
using namespace std;

// Implementing a global function to print the value of a private member
class Circle
{
private:
  double radius;

public:
  Circle(double r)
  {
    radius = r;
  }

  friend void printRadius(const Circle& c); // Friend function declaration
};

void printRadius(const Circle& c)
{
  cout << "Radius: " << c.radius << endl;
}

int main()
{
  Circle c1(5);
  printRadius(c1); // Accessing private member

  return 0;
}
