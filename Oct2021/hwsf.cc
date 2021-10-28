/* Homework 6 by Salvador Aleman
 Convert your Triangle structure, and all your Triangle functions into 
 a Triangle class complete with constructors, setters, getters, and methods. */

#include <iostream>
#include <cmath>

using std::cin; using std::cout;  using std::endl;    using std::string;

void new_pr(float &hyp, float &Theta_A, float &Theta_B, float side_a, float side_b);

class tri{
      private:
       float l1;
       float l2;
       float l3;
       float a1;
       float a2;
       float a3 = 90;

      public:
      tri(){cout<< "Empty Constructor" <<endl;}

      tri(float n1,float n2)
      {
       l1 = n1;
       l2 = n2;
      cout << "Next Constructor" <<endl;
      }     

      void setter(float n1, float n2)
      {
       l1 = n1;
       l2 = n2;
      } 
      
       void new_pr()
        {
        l3 = sqrt( pow(l1,2) + pow(l2,2));
        a1 = asin(l1/l3);
        a2 = asin(l2/l3);
        }

       void disp()
       {
        cout << "The hypotenuse of a right triangle with side a = " << l1 
             << " and sideb b = " << l2 
             << " is h = " << l3 << "." 
             << endl;
        cout << "Angle A (opposite side a) is " << a1 << " radians or "  
             << a1 * 180/ M_PI << " degrees." 
             << endl;
        cout << "Angle B (opposite side b) is " << a2 << " radians or "
             << a2 * 180/ M_PI << " degrees." 
             << endl;
       }
//       ~tri(){cout<< "Deconstructer" <<endl;}
};

int main ()
{
//Declaring Variables.
  tri foo;
  tri bar;
  foo.setter(3, 4);
  bar.setter(5, 12);

  tri faa(3,4);
  tri ber(6,12);

  foo.new_pr();
  bar.new_pr();
  faa.new_pr();
  ber.new_pr();
                                           cout<<""<<endl;
  cout << "This program finds the hypotenuse 'h' of a right triangle if the sides 'a' and 'b' are known." <<endl;
                                           cout<<""<<endl;
//Printing out the results
  foo.disp();
  bar.disp();
  faa.disp();
  ber.disp();
}
