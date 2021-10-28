#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::endl;
using std::string;

class Point
{
  private:
  float px;
  float py;
  public:
    Point()
    {
     px = 1;
     py = 1;
    }

   Point(float x, float y)
   {
    px = x;
    py = y;
   }

   Point(float x)
    {
     px = x;
     py = x;
    }

    //accessors
    float get_x()
    {
     return px;
    }
    float get_y()
    {
     return py;
    }

    //setters
    void set_x(float x)
    {
     px = x;
    }
    void set_y(float y)
    {
     py = y;
    }
  float distance(Point P)
  {
   return sqrt(pow(px - P.px, 2) + pow(py - P.py), 2 );
  }

  float distance_to_origin()
  {
   Point P(0,0)
   return distance(P)
  }

  string printout()
  {
  string output = "(" + std::to_string(px) + "," + std::string(py) + ")"; 
  return output;
  }

  /*voidp printout()
 */
};

class line
{
   private:
     Point P1;
     Point P2;
   public:
    Line()
     {
     P1.setx(1);
     P1.sety(1)
     P2.setx(0);
     P2.sety(0);
     }

   Line(Point PointA, Point PointB)
   {
     P1 = PointA;
     P2 = PointB;
   }

   string printout()
   {
    string output = P1.printout() + "-" +P2.printout();
    return output;
   }

};

int main()
{
  Point my_point(5, 7);
  Point my_other_point(8, 9);

  cout << my_point.printout()  <<endl;
  cout << my_other_point.printout() <<endl;

  float d = my_point.distance(my_other_point);
  
  cout << "the distance between the 2 points is:" << d <<endl;
  
  Line my_line(my_point, my_other_point);
  cout << my_line.printout() <<endl;

  return 0;
}
