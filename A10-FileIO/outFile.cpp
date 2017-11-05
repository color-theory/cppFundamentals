#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ofstream outFile("exampleText/your.poem");
  string line;
  
  cout << "Start your poem: (End the file by typing end)\n\n"; 
  for(;(getline(cin,line)) && (line != "end");)
    {
      outFile << (line) << endl; 
    }
  
  outFile.close();    
  return 0;
}
