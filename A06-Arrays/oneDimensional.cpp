#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

  const int DAYS_OF_WEEK = 7;
  enum Day {SUN, MON, TUE, WED, THU, FRI, SAT};
  
  double maxTemps[DAYS_OF_WEEK]; //initialize the maxTemps array with size 7
  srand(time(NULL));
  for(int x=0; x < sizeof(maxTemps)/sizeof(maxTemps[0]); x++)
    {
      maxTemps[x] = rand()%100 + 1;
    }
  for (Day dayIndex = SUN; dayIndex <= SAT; dayIndex = static_cast<Day>(dayIndex+1))
    {
      cout << dayIndex << " " << maxTemps[dayIndex] << endl;
    }
  return 0;
}
  
