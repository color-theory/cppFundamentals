#include <iostream>
using namespace std;

int main()
{
  double initArray[4] = {21.2, 42.3, 98};
  
  for(int x = 0; x < 4; x++)
    {
      cout << initArray[x] << endl; //21.2 42.3 98 0
    }

  typedef int IntArrayWithSeven[7];

  IntArrayWithSeven myInt = {1, 2, 3, 4, 5, 6, 7};

  cout << sizeof(myInt)/sizeof(myInt[0]) << myInt[6] << endl; // 7 7
  return 0;
}
