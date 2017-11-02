#include <iostream>
using namespace std;

int main()
{
  char ch = 'a';
  int x = 43;

  cout << x << ch << "\n\n";

  cout.put(ch);   // a 
  cout.put('b');  // b
  cout.put(99);   // c (99 in ASCII)
  cout.put(ch+3); // d
  cout.put('\n'); // new line

  return 0;
}
  
  
  
