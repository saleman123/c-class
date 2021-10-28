#include <iostream>
#include <cmath>
/* Homework 6 by Salvador Aleman

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

/*
float hyp_calc(float side_a, float side_b);
float Theta_A_calc(float side_a, float hyp);  
float Theta_B_calc(float side_b, float hyp);
*/
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
      setter(float n1, float n2)
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
                                           cout<<""<<endl;
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
  cout << "This program finds the hypotenuse 'h' of a right triangle if the sides 'a' and 'b' are known." <<endl;
                                           cout<<""<<endl;
//Printing out the results
  foo.disp();
  bar.disp();
/*
  cout << "What is the length of side a? "; 
   //cin >> side_a;
   side_a = 3;

  cout << "What is the length of side b? ";
   //cin >> side_b;
   side_b = 4;

  Working the math with the variables.
  hyp = sqrt( pow(side_a,2) + pow(side_b,2) );
  Theta_A = asin(side_a/hyp);
  Theta_B = asin(side_b/hyp);  

hyp = hyp_calc(side_a, side_b);
Theta_A = Theta_A_calc(side_a, hyp);
Theta_B = Theta_B_calc(side_b, hyp);

ans = new_pr(hyp, Theta_A, Theta_B, side_a, side_b);

                                           cout<<""<<endl;
                                           cout<<""<<endl;

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

float hyp_calc(float side_a, float side_b) 
{
   float hyp;
   hyp = sqrt( pow(side_a,2) + pow(side_b,2));
   return hyp;
}

float Theta_A_calc(float side_a, float hyp)
{
  float Theta_A;
  Theta_A = asin(side_a/hyp);
  return Theta_A; 
}  

float Theta_B_calc(float side_b, float hyp)
{
  float Theta_B;
  Theta_B = asin(side_b/hyp);  
  return Theta_B;
}

 void new_pr(float &hyp, float &Theta_A, float &Theta_B, float side_a, float side_b)
{
   hyp = sqrt( pow(side_a,2) + pow(side_b,2));

   Theta_A = asin(side_a/hyp);

   Theta_B = asin(side_b/hyp);  

}
*/
