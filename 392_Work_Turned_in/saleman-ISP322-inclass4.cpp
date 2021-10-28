#include <iostream>

using std::cout;
using std::endl;
//using std::cin;


int fib(int n);

int main()
{
  int n = 8;
//  cout<< "Plese give us n: " << endl;
//  cin >> n;
  cout << "Fn = F(n-1) + F(n-2) = " << fib(n) << endl;
  return 0;
}

int fib(int n)
{
  if (n <=1)
     return n;

  return fib(n-1) + fib(n-2); 

}
