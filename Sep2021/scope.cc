#include <iostream>

using std::cout;
using std::endl;

int main()
{
  int i = 42;

  {
    int i = 7;
    i++;
  } 

  cout << i << endl;

 return 0;

}

