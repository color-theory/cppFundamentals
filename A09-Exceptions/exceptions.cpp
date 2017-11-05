#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

int addSingleDigits(int num1, int num2) throw(invalid_argument)
{
  if((abs(num1) >= 10) || (abs(num2) >=10))
    {
      throw invalid_argument("Invalid_Argument: Single Digits only, Duh.");
    }
  return num1 + num2;
}

int main()
{
  int mynum1, mynum2, result;

  for (cout << "\nTwo Single digits: ";(cin >> mynum1 >> mynum2) && (mynum1 > -42);cout << "\nTwo More: ")
    {

      try
	{
	  result = addSingleDigits(mynum1, mynum2);
	  cout << result << endl;
	}
      catch (invalid_argument e)
	{
	  cout << e.what() << endl;
	}
    }
  
  return 0;
  
}
