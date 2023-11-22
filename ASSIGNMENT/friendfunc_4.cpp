#include<iostream>
using namespace std;

// Comparing two objects of different classes
class Point
{
private:
  int x;
  int y;

public:
  Point(int x, int y)
  {
    this->x = x;
    this->y = y;
  }

  friend bool operator==(const Point& p1, const Point& p2)
  {
    return (p1.x == p2.x && p1.y == p2.y);
  }
};

int main()
{
  Point p1(10, 20);
  Point p2(10, 20);

  if (p1 == p2) // Overloaded '==' operator
  {
    cout << "Points are equal" << endl;
  }
  else
  {
    cout << "Points are not equal" << endl;
  }

  return 0;
}
