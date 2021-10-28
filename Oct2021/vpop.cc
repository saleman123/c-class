#include <iostream>
#include <vector>

using std::vector;
using std::endl;
using std::cout;

int main()
{
 vector<int> v1;
 vector<int> v2;

 cout << v1.size() <<endl;


 for(int i = 0 ; i<100   ; i++)
 {
   v1.push_back(i);
 }

  cout << "Vector 1 size: " <<  v1.size() <<endl;

  while(v1.size() > 0)
  {
   cout << "Vector1 front, back: " << endl;
   cout << v1.front() <<endl;
   cout << v1.back() <<endl;

   v2.push_back(v1.pop_back());
   v1.pop_back();

   cout << endl;
   cout << v1.front()  <<endl;
   cout << v1.back() <<endl;

   }
return 0;


}



