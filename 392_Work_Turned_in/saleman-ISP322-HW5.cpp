#include <iostream>
#include <cmath>
/* Homework 5 by Salvador Aleman
 Define a trinagle struct that has 3 float sides and 3 floats angles.
 Write a program that sets 2 side lengths (hard coded) for two (2) seperate
 triangels, and computes and outpus the hypotenuse, 90 degree angle, 
 Theta 1 angle, and the Theta 2 angle for each of the triangles.  
 Triangle 1 sides = 3,4 
 Trinagle 2 sides = 5,12
 Specifications:  Your functions will now use your struct as a parameter
 to make the calculations.  The triangle should be a custom datatype with 
 six(6) floats that are all either given or calculated and output (cout)
 from the custom datatype. K
*/
using std::cin;     using std::cout; 
using std::endl;    using std::string;

void new_pr(float &hyp, float &Theta_A, float &Theta_B, float side_a, float side_b);

struct tri{
       float l1;
       float l2;
       float l3;
       float a1;
       float a2;
       float a3 = 90;

       void new_pr()
        {
        l3 = sqrt( pow(l1,2) + pow(l2,2));
        a1 = asin(l1/l3);
        a2 = asin(l2/l3);
        }
       };

int main ()
{
//Declaring Variables.
  tri foo;
  foo.l1 = 3;
  foo.l2 = 4;

  tri bar;
  bar.l1 = 5;
  bar.l2 = 12;

  foo.new_pr();
  bar.new_pr();
                                           cout<<""<<endl;
  cout << "HWK#5. This program finds the hypotenuse 'h' of a right triangle if the sides 'a' and 'b' are known.  Follows the guidance of defining/using structs." <<endl;
                                           cout<<""<<endl;
//Printing out the results
  cout << "The hypotenuse of a right triangle with side a = " << foo.l1 
       << " and sideb b = " << foo.l2 
       << " is h = " << foo.l3 << "." 
       << endl;

  cout << "Angle A (opposite side a) is " << foo.a1 << " radians or "  
       << foo.a1 * 180/ M_PI << " degrees." 
       << endl;
  cout << "Angle B (opposite side b) is " << foo.a2 << " radians or "
       << foo.a2 * 180/ M_PI << " degrees." 
       << endl;
                                           cout<<""<<endl;

  cout << "The hypotenuse of a right triangle with side a = " << bar.l1
       << " and sideb b = " << bar.l2 
       << " is h = " << bar.l3 << "." 
       << endl;

  cout << "Angle A (opposite side a) is " << bar.a1 << " radians or "  
       << bar.a1 * 180/ M_PI << " degrees." 
       << endl;
  cout << "Angle B (opposite side b) is " << bar.a2 << " radians or "
       << bar.a2 * 180/ M_PI << " degrees." 
       << endl;
                                           cout<<""<<endl;
return 0;
}


