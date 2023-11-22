// Referring to a class inside another class
#include <iostream>

using namespace std;

class MyClass
{
public:
  void printMessage()
  {
    cout << "Hello from MyClass!" << endl;
  }
};

class AnotherClass
{
public:
  void printMessage()
  {
    MyClass myObject; // Create an instance of MyClass
    myObject.printMessage(); // Call printMessage on the instance
  }
};

int main()
{
  AnotherClass anotherClass;
  anotherClass.printMessage();

  return 0;
}
