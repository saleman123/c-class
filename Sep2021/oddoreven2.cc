#include <iostream>
#include <time.h>

using std::cout;
using std::endl;

int main()

{
 srand(time(NULL));

  int x = rand ();

  cout << "the random numer is" << x << endl;

  if (x & 2 == 0)
  {
   cout << "x is even"  << endl;
  }
  else
  {
   cout << "x is odd"  <<  endl;}
  }

return 0;
}

