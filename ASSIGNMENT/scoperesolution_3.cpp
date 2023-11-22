// Accessing a class's static variables

#include <iostream>

using namespace std;

class MyClass
{
public:
  static int count; // Static variable

  MyClass()
  {
    count++;
  }

  static int getCount()
  {
    return count;
  }
};

int MyClass::count = 0; // Definition of static variable

int main()
{
  MyClass object1;
  MyClass object2;

  cout << "Count: " << MyClass::getCount() << endl;

  return 0;

}
