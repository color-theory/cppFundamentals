#include <iostream>
using namespace std;

int main()
{
  typedef long double Real;  // we could change this in one place and affect all Real variables defined throughout the program

  Real myLongDouble = 123.23;

  cout << myLongDouble << "\n\n";

  return 0;
}
