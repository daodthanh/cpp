// signtest.cpp
#include <iostream>
using namespace std;

int main(){
  int signed_var = 1.5E9;
  unsigned int unsign_var = 1.5e9;

  signed_var = (signed_var * 2) / 3;
  unsign_var = (unsign_var * 2) /3 ;

  cout << "signed_var: " << signed_var << endl;
  cout << "unsigned_var: " << unsign_var << endl;
  return 0;
}