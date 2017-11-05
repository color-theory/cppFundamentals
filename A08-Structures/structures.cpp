#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Address
{
  string city;
  string state;
};

struct Person
{
  string name;
  int age;
  double gpa;
  Address address;
};

Person copyPerson(Person person);

int main()
{

  Person weirdClass[2];
  
  weirdClass[0] = {"Saki", 25, 4.0,{"Kansas City", "MO"}}; // c++11 and up
  
  cout << weirdClass[0].name << endl << weirdClass[0].age << endl << showpoint << setprecision(2) << weirdClass[0].gpa << endl;
  cout << weirdClass[0].address.city << endl << weirdClass[0].address.state << endl;
  
  weirdClass[1] = copyPerson(weirdClass[0]);

  cout << weirdClass[1].name << endl << weirdClass[1].age << endl << weirdClass[1].gpa << endl;
  cout << weirdClass[1].address.city << endl << weirdClass[1].address.state << endl;
  
  return 0;
}


Person copyPerson(Person person)
{
  Person newPerson = person;
  newPerson.name = "John Malkovich";
  newPerson.address.city = "Los Angeles";
  newPerson.address.state = "CA";
  return newPerson;
}
