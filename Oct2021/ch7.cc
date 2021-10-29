/*In class challenge #7 */
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
 
 Point(){cout<<"For Point NO argument constructor"<<endl;}

 void setter(float A,float B) {x = A; y = B;}

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

class Line
{
 public:
  Point q1;
  Point q2;

 Line()
 {
  cout<< "Con"  <<endl;
 }

 Line(Point V, Point W)
 {
  q1 = V;
  q2 = W;
  cout<<"2 argument line constructor"<<endl;
 }

 void printout() {cout<<"Print the 2 points in line: "<<
                  q1.getterx()<<q1.gettery()<<q2.getterx()<<q2.gettery()
                 <<endl; }
 Point midpoint()
 {
 Point m1;
 m1.setter(((q1.getterx() + q2.getterx()) * .5),((q1.gettery() + q2.gettery())*.5));
 return m1;
 }
};

int main()
{
 float dist;
 Point P1(3,4);
 Point P2(2,2);

 Line L1; 
 Line S1(P1, P2);

 dist = P1.distance_to_origin();

 cout<< "The distance to the origin is "  << dist << " from the point." <<endl;
 cout<<""<<endl;
 cout<< S1.q1.getterx() <<endl;
 cout<<""<<endl;

 P1.printout();
 cout << ""<<endl;
 cout<< P1.distance(P2)<<endl;
 cout <<""<<endl;
 cout<< P2.distance(P1)<<endl;
 S1.printout();
 cout<<""<<endl;
 Point Z = S1.midpoint();
 ciout<<""<<endl;
 Z.printout();
 return 0;
}

