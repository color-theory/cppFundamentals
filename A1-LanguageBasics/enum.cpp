#include <iostream>
using namespace std;

int main()
{
  enum {sun,mon,tue,wed,thur,fri,sat};
  enum Season {spring, summer, fall, winter};

  Season seasons;

  seasons = fall;
  
  cout << sun << mon << tue << wed << thur << fri << sat << "\n";
  cout << seasons << "\n\n"; // 2

  return 0;
}
  
