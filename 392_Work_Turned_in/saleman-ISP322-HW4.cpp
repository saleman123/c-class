#include <iostream>
#include <bitset>
/*Homework 4 By Salvador Aleman
Write a number converter that takes a Base-10 number as input
from the user and prints out the Base-2 equivalent.  
Your converter should use recursion.
*/

using std::cout;
using std::endl;
using std::cin;
using std::bitset;

int conv(int n);

int main()
{
  int n;

  cout << "" << endl;
  cout << "This program gives you the equivalent Base 2 number given a Base 10 number." << endl;
  cout << "" << endl;

  cout<< "Plese type your Base 10 number: " << endl;
  cin >> n;
  cout << "" << endl;

  int ans = conv(n);
  cout << "The Base 2 number would be  =  " << bitset<32>(ans) << endl << endl;
  return 0;
}

int conv(int n)
{
  int r;
  if (n > 0)
  {  
    r = n%2;
    r = (conv(n/2) << 1) + r; 
  }
  else 
    r = 0; 
  return r;
}
