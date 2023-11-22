#include<iostream>
using namespace std;

// Implementing a generic swap function

template <typename T>
void mySwap(T& a, T& b)
{
  T temp = a;
  a = b;
  b = temp;
}

int main()
{
  int x = 10;
  int y = 20;

  mySwap(x, y); // Swapping values of x and y using your custom swap function

  cout << "Value of x: " << x << endl;
  cout << "Value of y: " << y << endl;

  return 0;
}
