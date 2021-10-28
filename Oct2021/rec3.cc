#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int fib_seq(int n);

int main()
{
  int n = 0;
  cout<< "Plese give us n: " << endl;
  cin >> n;
  cout << "Fn = " << fib(n) << endl;
  return 0;
}

int fib_seq(int n)
{
   if (n <= 0)
      return 0;

   int fiq_seq[n];
   fiq_seq[0] = 0, fib_seq[1] = 1;
   int fib_sum = fib_seq[0] + fib_seq[1];

  for (int i = 2; i <= n; i++)
  {
    fib_seq[i] = fib_seq[i-1] + fib_seq[i-2];
  }
  return fib_seq[n];
}
