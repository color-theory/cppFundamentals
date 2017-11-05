#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  ifstream inFile;
  inFile.open("exampleText/my.poem");

  while(inFile.peek() != EOF)
    {
      cout.put(inFile.get());
      inFile.ignore(1,'\n');
    }

  inFile.close();
  cout << endl;
  return 0;
}
  
