#include <iostream>
using namespace std;

int main()
{
  /*
    
    initialize
    while(test)
    {
      statement
      update
    }

    for(initialize; test; update){statement}

  */
  
  for(int counter = 1; counter <= 5; ++counter){
    if(counter == 4)
      {
	continue;
      }
    cout << counter;
  }

  //for loops can have multiple initilizations and updates.
  for(int x = 0, y = 3; (x < 3) || (y < 10); x++, y++)
    {
      cout << x << " " << y << "\n";
    }

  //for loops can omit any step
  int inputValue;
  for(;(cin >> inputValue);)
    {
      if(inputValue == 42)
	{
	  break;
	}
    }
      
  cout << "\n\n";
  return 0;
}
