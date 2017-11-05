#include <iostream>
using namespace std;

int main()
{
  typedef int DaysArrayType[365];
  typedef DaysArrayType YearsArrayType[10];

  YearsArrayType years = {{1, 2 ,3 ,4 ,5}, {11, 12, 13}};

  cout << years[0][2] << endl; // 3
  cout << years[1][1] << endl; // 12

  return 0;
}
