#include <iostream>
using namespace std;

int main()
{
  if(2 > 1)
    {
      cout << "2 is greater than 1";
    }
  else
    {
      cout << "2 is NOT greater than 1";
    }

  int x = 42;

  switch(x)
    {
    case 12:
      cout << "This will not get hit.";
    case 42:
      cout << "This will be written because x is 42. \n";
    case 45:
      cout << "This will also be written because I didn't break in the case above\n\n";
      break;
    case 46:
      cout << "This will not get hit.";
    }

  int y = 30;
  switch(y)
    {
    case 21:
      cout << "Not hit";
    default:
      cout << "Default is called if no other case matches\n\n";
    }
   
  
  return 0;
}
