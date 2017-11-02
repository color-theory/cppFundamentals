#include <iostream>
using namespace std;

int main(){
  const double PI = 3.14159;
  double radius;

  cout << "Enter the radius of the sphere: ";
  cin >> radius;

  double volume = 4 * PI * radius * radius * radius /3;
  cout << "The volume of a sphere of radius "
       << radius << " inches is " << volume
       << " cubic inches. \n";
  return 0;
}
