#include <iostream>

using std::cout;
using std::endl;


int main()
{
  int x = 7;
  int x_array[4] = {13, 78, 5, 12};
  
  cout << x  <<  endl;
  cout << &x << endl <<endl;

  cout << &x_array[0] << endl;
  cout << &x_array[1] << endl;
  cout << &x_array[2] << endl;
  cout << &x_array[3] << endl<<endl;
  cout << x_array << endl; 

  for (int i = 0; i<4; i++)
  {
   cout << x_array[i] << endl;
}


return 0;
}


