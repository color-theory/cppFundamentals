#include <iostream>
using namespace std;

int secondItem(int myArray[])
{
  myArray[1] = 42; //updates original array
  return myArray[1];
}

int main()
{
  int newArray[4] = {1,2,3,4};

  // the order of expression evaluation is unspecified. don't do this.
  cout << secondItem(newArray) << endl << newArray[1] << endl; // 42 2 
  cout << newArray[1] << endl; // 42
  return 0;
}
