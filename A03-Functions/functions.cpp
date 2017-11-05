#include <iostream>
using namespace std;

void callG(int, int);

void callF()
{
  callG(3,4);
}

void callG(int b, int c)
{
  cout << "hello\n\n";
  return;
}

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

void maxByReference(int x, int y, int& max)
{
  max = (x > y) ? x : y;
}

int main()
{

  cout << "Enter two integers: ";

  int a, b;
  cin >> a >> b;

  cout << "\n Your max is " << max(a, b) << "\n\n";

  int myMax;
  maxByReference(a, b, myMax);

  cout << myMax << "\n\n";

  callF();
    
  return 0;
}
  
   
