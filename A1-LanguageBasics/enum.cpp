#include <iostream>
using namespace std;

int main()
{
  enum {sun,mon,tue,wed,thur,fri,sat};
  enum Season {spring, summer, fall, winter};

  Season seasons;

  int mySeason = winter;
  
  seasons = fall;
  
  cout << sun << mon << tue << wed << thur << fri << sat << "\n";
  cout << seasons << mySeason <<  "\n\n"; // 23
  return 0;
}
  
