#include <iostream>
using namespace std;

int max(int x, int y)
{
  if (x > y)
    {
      return x;
    }
  else
    {
      return y;
    }
}

int main()
{

  cout << "Enter two integers: ";

  int a, b;
  cin >> a >> b;

  cout << "\n Your max is " << max(a, b) << "\n\n";

  return 0;
}
  
   
