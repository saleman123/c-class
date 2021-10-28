#include <iostream>
#include <cmath>
// Homework 1 by Salvador Aleman
// Write a program that asks the user for the lenght of side a and side b.
// From those two variables calculate the hypotenuse, angle A(theta1), and
// angle B(theta2) for a right triangle. [Hint: for the angels SOHCAHTOA]

using std::cin;     using std::cout; 
using std::endl;    using std::string;

int main ()
{
//Declaring Variables.
  float side_a;    float side_b;
  float hyp;       float Theta_A;
  float Theta_B;
                                           cout<<""<<endl;
  cout << "This program finds the hypotenuse 'h' of a right triangle if the sides 'a' and 'b' are known." <<endl;
                                           cout<<""<<endl;
  cout << "What is the length of side a? "; 
   //cin >> side_a;
   side_a = 3;

  cout << "What is the length of side b? ";
   //cin >> side_b;
   side_b = 4;

//Working the math with the variables.
      hyp = sqrt( pow(side_a,2) + pow(side_b,2) );
  Theta_A = asin(side_a/hyp);
  Theta_B = asin(side_b/hyp);  
                                           cout<<""<<endl;
//Printing out the results
  cout << "The hypotenuse of a right triangle with side a = " << side_a 
       << " and sideb b = " << side_b 
       << " is h = " << hyp << "." 
       << endl;
                                           cout<<""<<endl;
  cout << "Angle A (opposite side a) is " << Theta_A << " radians or "  
       << Theta_A * 180/ M_PI << " degrees." 
       << endl;
  cout << "Angle B (opposite side b) is " << Theta_B << " radians or "
       << Theta_B * 180/ M_PI << " degrees." 
       << endl;
                                           cout<<""<<endl;
  cout << "I like this class.  So far so good!" << endl;
                                           cout<<""<<endl;
return 0;
}
