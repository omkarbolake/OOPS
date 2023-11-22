//multiple inheritance
#include <iostream>

using namespace std;

class BaseClass
{
public:
  void printMessage()
  {
    cout << "Namaste from BaseClass!" << endl;
  }
};

class AnotherClass : public BaseClass
{
public:
  void printMessage()
  {
    BaseClass::printMessage(); // Accessing BaseClass's printMessage function
    cout << "Namaste from AnotherClass!" << endl;
  }
};

class DerivedClass : public BaseClass
{
public:
  void printMessage()
  {
    BaseClass::printMessage(); // Accessing BaseClass's printMessage function
    cout << "Namaste from DerivedClass!" << endl;
  }
};

int main()
{
  AnotherClass anotherClass;
  DerivedClass derivedClass;

  anotherClass.printMessage();
  derivedClass.printMessage();

  return 0;
}
