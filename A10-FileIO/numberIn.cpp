#include <iostream>
#include <fstream>
using namespace std;


int main()
{

  ifstream inFile("exampleText/mynumbers.dat", ios::binary);
  int x, evenCount;
  double totalItems;
  
  while(inFile.peek() != EOF)
    {
      x = inFile.get();
 
      if(x % 2 == 0)
	{
	  evenCount++;
	  cout << evenCount << " " << x << endl;
	}
      totalItems++;
    }

  cout << "There were " << evenCount << " even numbers that were generated in mynumbers.dat out of " << totalItems << endl;
  inFile.close();
  
  return 0;
}
