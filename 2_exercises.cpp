// 2_exercises.cpp
#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;

int main(){

  char ch;
  int check,george = 5;
  float temp;
  const float GPB_2_USD=1.487, FRF_2_USD=0.171, DEM_2_USD=0.584, JPY_2_USD=0.00955;
  float usd_amount;


  ch = (char)301;
  cout << ch << endl;
  cout << 12 << endl;
  cout << 'a' << endl;
  cout << 4.28915 << endl;
  cout << "Jim" << endl;
  cout << 509 << endl;
  cout << setw(8) << george ;

  cout << "The temperature: " << endl;
  // cin >> temp;
  // cout << temp << endl;
  cout << 11%3 << endl;

  cout << setw(5) << 1990 << setw(10) << 135   << endl
       << setw(5) << 1991 << setw(10) << 7290  << endl
       << setw(5) << 1992 << setw(10) << 11300 << endl
       << setw(5) << 1993 << setw(10) << 16200 << endl;
  /*
  cout << " Candy is dandy, \n But liquor is quicker." << endl;
  cout << "Enter a letter: " << endl;
  cin >> ch;
  check = islower(ch);
  cout << check << endl;
  cout << "Enter the amount in USD: ";
  cin >> usd_amount;
  cout << setw(10) << usd_amount << " USD is " << endl
       << setw(10) << usd_amount / GPB_2_USD << " in GPB." << endl
       << setw(10) << usd_amount / FRF_2_USD << " in FRF." << endl
       << setw(10) << usd_amount / DEM_2_USD << " in DEM." << endl
       << setw(10) << usd_amount / JPY_2_USD << " in JPY." << endl;

  int a,b,c,d,e,f;
  // Fraction
  cout << "Enter first fraction: ";
  cin >> a >> ch >> b;
  cout << "Enter second fraction: ";
  cin >> c >> ch >> d;
  e = a * d + b*c;
  f = b*d;
  cout << "Sum = " << e << ch << f << endl;

  */
  cout << setiosflags(ios::left)
       << setw(15) << "Last name" 
       << setw(15) << "First Name" 
       << setw(30) << "Street address" 
       << setw(15) << "Town"
       << setw(15) << "State" << endl
       << setw(80) << setfill('-') <<""<< endl
       << setfill(' ')
       << setw(15) << "Jones" 
       << setw(15) << "Bernard" 
       << setw(30) << "109 Pine Lane" 
       << setw(15) << "Littletown"
       << setw(15) << "MI" << endl;

    return 0;

}