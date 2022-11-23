// cast.cpp
#include <iostream>
using namespace std;

int main(){
  int int_var = 1.5e9;
  int_var = (int_var * 10) / 10;
  cout << "int_var = " << int_var << endl;

  int_var = 1.5e9;
  // int_var = double(int_var) * 10 / 10;
  // int_var = (double)int_var * 10 / 10;
  int_var = (static_cast<double>(int_var) * 10) / 10;
  cout << "int_var = " << int_var << endl;
  /* return 0; */
}