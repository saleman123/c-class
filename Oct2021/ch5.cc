/*In class challenge #5 */
#include <iostream>
#include <cmath>
using std::cout; using std::endl;

struct point
{
 float x;
 float y;
};

struct line_segment
{
 point A;
 point B;
};
	
//float calc_dist(point P1, point P2);
float calc_dist(line_segment LS);

int main()
{
 point P1, P2;
 line_segment myls; 
 float dist;
 P1.x = 3.;
 P1.y = 4.;
 P2.x = 2.;
 P2.y = 2.;

 myls.A = P1; 
 myls.B = P2;

 dist = calc_dist(myls);
 cout << "Distance  = " << dist <<endl;
 return 0;
}

/*
float calc_dist(point P1, point P2)
{
 float dist = sqrt(pow(P2.x - P1.x,2)
                 + pow(P2.y - P1.y,2) );
 return dist;
}*/

float calc_dist(line_segment LS)
{
 float dist = sqrt(pow(LS.B.x - LS.A.x,2)
                 + pow(LS.B.y - LS.A.y,2) );
 return dist;
}
