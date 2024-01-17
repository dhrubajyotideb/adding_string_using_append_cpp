#include <iostream>
#include <string>
using namespace std;
// .append can be used to add two strings
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}