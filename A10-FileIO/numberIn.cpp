#include <iostream>
#include <fstream>
using namespace std;


int main()
{

  ifstream inFile("exampleText/mynumbers.dat");
  int x, evenCount;
  double totalItems;
  
  while(inFile.peek() != EOF)
    {
      inFile >> x;
 
      if(x % 2 == 0)
	{
	  evenCount++;
	}
    }

  cout << "There were " << evenCount << " even numbers that were generated in mynumbers.dat out of " << totalItems << endl;
  inFile.close();
  
  return 0;
}
