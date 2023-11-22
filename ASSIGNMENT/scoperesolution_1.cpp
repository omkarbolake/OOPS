//Accessing a global variable when there is a local variable with the same name
#include <iostream>

using namespace std;

int num = 10; // Global variable

int main()
{
  int num = 20; // Local variable

  cout << "Value of global num: " << ::num << endl;
  cout << "Value of local num: " << num << endl;

  return 0;
}
