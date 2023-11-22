//Defining a function outside a class


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

void printMessage() // Function defined outside the class
{
  cout << "Hello from outside MyClass!" << endl;
}

int main()
{
  MyClass myClass;
  myClass.printMessage();

  printMessage();

  return 0;
}
