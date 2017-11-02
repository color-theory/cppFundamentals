#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

  float gpa = 4;

  cout << "My GPA is " << gpa << "\n"; // My GPA is 4

  cout << "My GPA is " << showpoint << gpa << "\n"; // My GPA is 4.00000
  cout << "My GPA is " << showpoint << setprecision(2) << gpa << "\n"; // My GPA is 4.0

  cout << right; // right aligns the next characters after output operator <<
  cout << "abc" << setw(6) << "def" << "ghi";

  return 0;
}
