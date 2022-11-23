#include <iostream>
using namespace std;

int main(){
  int ftemp;

  cout << "Enter temperature in fahrenhetit: ";
  cin >> ftemp;
  int ctemp = (ftemp - 32) * 5 / 9;
  cout << "Equivalent in Celsius is: " << ctemp << '\n';
  return 0;
}