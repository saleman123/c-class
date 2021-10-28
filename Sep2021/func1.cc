#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int hello();
float myAddition (float a, float b);

int main ()
{
  float my_Answer;

  float x = 4.7;
  float y = 9.8;

  my_Answer = myAddition(x, y);
  cout << x << " with MyAddition redifined and " << y << endl;  
  cout << "is equal to: "<< my_Answer << endl; 



  for (int i=0; i<10; i++)
  {hello();}

return 0;
}

float myAddition (float a, float b)
{
  float answer;
  float my_A = a*3;
  float my_B = b+100.1;

  answer = 1.5*(a + b)*(a*b);
  return answer;
}


int hello()

{
  cout << "Hello world" <<  endl;

return 0;
}




