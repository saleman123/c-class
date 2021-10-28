#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int fib(int i);

int main()
{
 int n = 0;
 cout << "Enter n: "  << endl;
 cin  >> n;
 cout << "F(n) = F(n-1) + F(n-2) = " << fib(n) << endl;
 return 0;
}

int fib(int n )
{
 if (n <= 1)
  return n; 
 return fib(n-1) + fib(n-2); 
}


/* This is the second exercise in recursion class 
 as the Fibonicci sequence
using std::cin;

int fib(int n);

int main()
{
 int n = 0;
 cout << "Please give us n: " << endl;
 cin  >> n;
 cout << "Fn = " << fib(n)  << endl;
 return 0;
}

int fib(int n)
{
 if ( n <= 0) \\Don't need {} i.e there is only one line afterwards
  return 0;

 int fib_seq[n];
 fib_seq[0] = 0, fib_seq[1] = 1;
 int fib_sum = fib_seq[0] + fib_seq[1]; /*For clarity*/
/*
 for(int i = 2; i <= n ; i++) /*Start at interger 2*//*
 {
  fib_seq[i] = fib_seq[i - 1] + fib_seq[i - 2];
 }
 return fib_seq[n];
}  ***************/



/************************
This is the first example of recursion itself on 
7 Oct 2021

int recurse_sum(int i);

int main()
{
 cout << recurse_sum(100)  <<endl;
 return 0;
}

int recurse_sum(int i)
{
 if (i == 0)
  return 0;
 else
  return i + recurse_sum(i - 1); 

} ***********************/


/*************************
This is the set up example from Matt to start the recursion example
on 7 Oct 2021.

int main()
{
 int sum = 0;
 for(int i = 0; i<= 100; i++)
 {
  sum = sum + i;
  cout << "sum = "<< sum <<endl;
 }
 return 0;
} ************************/
