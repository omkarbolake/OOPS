#include<iostream>
using namespace std;

//Accessing a private member of a class
class Rectangle
{
private:
  int length;
  int width;

public:
  Rectangle(int l, int w)
  {
    length = l;
    width = w;
  }

  friend int getArea(Rectangle rect); // Friend function declaration
};

int getArea(Rectangle rect)
{
  return rect.length * rect.width; // Accessing private members
}

int main()
{
  Rectangle rect(5, 3);
  int area = getArea(rect);
  cout << "Area of rectangle: " << area << endl;

  return 0;
}
