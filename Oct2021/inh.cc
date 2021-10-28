#include <iostream>

using std::cout;
using std::endl;

class rectangle
{
  protected:
   double h,l;
  public:
   Rectangle{}

   Rectangle (double lenght, double height)
   {
    l = lenght;
    h = height;
   }
   double getLength() { return l;   }
   double getHeight() { return h;   }
   double getArea()   { return l*h; }

};

class Square : public Rectangle 
{
 private:
  Square() {}
  Square( double lenght ) : Rectangle(length, length)
  {
   
  }
  int i;
   
};

int main()
{
 Rectangle myRect (2,5);
 Square mySqr (4);
 
 cout<< myRect.getArea() <<endl;
 cout << mySqr.getArea  <<endl;
 return 0;
}
