#include <iostream>
using std::cout;
using std::endl;
#include <time.h>

int main () 
{

      srand (time(NULL));
  int random_number;
  int Heads = 0;
  int Tails = 0;

while ( Tails < 1000)
{
      random_number = rand();
   if (random_number%2 == 0) 
     {  Heads = Heads + 1; }
   else {
       Tails = Tails + 1;}

}

  cout << "Number of Heads is " << Heads << endl;
  cout << "Number of Tails is " << Tails << endl;

return 0;
}
