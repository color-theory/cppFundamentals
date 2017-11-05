#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ofstream outFile("exampleText/your.poem", ios::app);
  string line;
  
  cout << "Add to your.poem: (End the session by typing end)\n\n"; 
  for(;(getline(cin,line)) && (line != "end");)
    {
      outFile << (line) << endl; 
    }
  
  outFile.close();    
  return 0;
}
