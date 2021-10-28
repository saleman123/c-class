#include <iostream>
#include <vector>
using std::endl;
using std::cout;
using std::vector;
int main()
{
/*  int numbers[] = {5, 4, 3, 2, 1 };
*/
  vector <int> numbers = {5, 4, 3, 2, 1};
  vector <float> my_flv(25, 3.1416);
/*  for (int i=0; i<5; i++)
   {  
    cout << numbers[i]  <<endl;
   }
*/
  for (auto &k : numbers)
   {
    cout<< k  <<endl;
    k = k+1;
    cout<< k  <<endl;
   }
  cout  << "-------------" <<endl;
  for (auto j : numbers)
  {
   cout<< j <<endl;
  }
  int num[5] = {2};
  cout << num[3] <<endl;
//**********
  cout << numbers[4]  <<endl;
  cout << numbers[5]  <<endl;
  cout << numbers[50] <<endl;
  cout << "____________" <<endl;
  for (auto j:my_flv)
  {
    cout<< j <<endl;

  }

  return 0;
}


