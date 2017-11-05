#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cin >> x;

  cout << "\nx is " << x << "\n\n";

  cin >> x >> y;
  
  cout << "\nx is " << x << " and y is " << y << "\n\n";


  char a, b;

  cin >> a >> b;
  cout << a << b << "\n\n";

  cin.get(a); // can accept spaces
  b = cin.get(); // another way of writing it

  cout << a << b << "\n\n";
  
  return 0;
}
