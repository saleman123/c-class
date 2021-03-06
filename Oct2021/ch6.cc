/*In class challenge #6 */
#include <iostream>
#include <cmath>
using std::cout; using std::endl;
class Point
{
 private:
  float x;
  float y;
 public:
  Point(float A, float B)
  {
  x = A;
  y = B;
  cout<< "Two argument constructor"  <<endl;
  }

 float distance_to_origin()
 {
 return sqrt(pow(x,2) + pow(y,2) );
 }

 void printout()  {cout<<"Coord x = " << x <<" and Coord y = "<< y <<endl;}
 
 float getterx(){return x;}
 float gettery(){return y;}

 float distance(Point sh)
 {
  return sqrt(pow(x - sh.getterx(),2) + pow(y-sh.gettery(),2));
 }

};



int main()
{
 float dist;
 Point P1(3,4);
 Point P2(2,2);

 dist = P1.distance_to_origin();

 cout<< "The distance to the origin is "  << dist << "from the point " <<endl;

 P1.printout();
 cout << ""<<endl;
 cout<< P1.distance(P2)<<endl;
 cout <<""<<endl;
 cout<< P2.distance(P1)<<endl;


 return 0;
}

