#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  typedef double YearArrayType[52][7];

  YearArrayType yearTemps = {42,42,42,42,42,42,42,53,53,53,53,53,53,53};

  srand(time(NULL));

  for(int week = 2; week < 52; week++)
    {
      for(int day = 0; day < 7; day++)
	{
	  yearTemps[week][day] = rand() % 100 + 1;
	}
    }

  for(int week = 0; week < 52; week++)
    {
      for(int day = 0; day < 7; day++)
	{
	  cout << yearTemps[week][day] << " ";
	}
      cout << endl;
    }

  return 0;
  
}
  
