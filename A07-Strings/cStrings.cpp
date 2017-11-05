#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  const int MAX_LENGTH = 30; //max string length before sentinel character
  typedef char StringType[MAX_LENGTH + 1]; //defining string with \0 sentinel

  StringType title = "Hello, C World!";
  cout << title << " strlen: " << strlen(title) << endl;

  strcpy(title, "You must do this.");
  cout << title << " strlen: " << strlen(title) << endl;

  title[0] = 'L';
  cout << title << title[17] << endl;

  StringType str2 = "I come before L";

  if(strcmp(str2, title) < 0)
    {
      cout << "str2 will be sorted above title" << endl;
    }

  if(strcmp(title, str2) > 0)
    {
      cout << "Same as above, but checking with str2 as second argument\n";
    }
  
  strcpy(title, str2);

  if(strcmp(title, str2) == 0)
    {
      cout << "The two are equal!\n";
    }

  strcpy(str2, strcat(str2, "!!!"));

  cout << str2 << endl;

  if(strncmp("This is not the same", "This is the same", 7)==0)
    {
      cout << "The first 7 characters were the same!" << endl;
    }

  cout.write(title, 5); // write the first 5 characters of title
  cout << endl;

  cout.write(&title[5], 5);
  cout << endl;

  cin.getline(title, 5); // gets first 5 characters from input

  cout << title << endl; // title only has the 5 characters above
  
  return 0;
}
