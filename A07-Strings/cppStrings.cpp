#include <iostream>
#include <string>
using namespace std;

int main()
{
  string title;

  title = "This is my title";
  cout << title << " length: " << title.length() << " size: " <<title.size() << endl;

  title = "It can be rewritten";
  cout << title << " length: " << title.length() << " size: " <<title.size() << endl;
  
  title = "smaller size";
  cout << title << " length: " << title.length() << " size: " <<title.size() << endl;
  
  string str1 = title + " to have more characters";
  str1 += '.';

  cout << str1 << " " << str1.length() << str1.size() << endl;

  title[3] = '!';
  cout << title << endl;

  cout << title.substr(3,5) << endl;

  cin >> str1;

  cout << str1 << endl;
  
  return 0;
}
  
