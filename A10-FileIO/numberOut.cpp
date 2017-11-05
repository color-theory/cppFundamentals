#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{

  srand(time(NULL));
  ofstream outfile;
  outfile.open("exampleText/mynumbers.dat", ios::binary);

  for(int x = 0; x < 100; x++)
    {
      for(int y = 0; y < 100; y+=5)
	{
	  outfile.put(rand() % 5 + y);
	}
    }
  outfile.close();
  return 0;
}

  
