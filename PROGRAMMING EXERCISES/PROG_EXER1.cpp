/*
*AUTHOR <Sofia Ruth E. Villanueva>
*DATE <August 04 2018 >
*NAME <Quadratic Formula>
*DESCRIPTION <>
*/
#include <iostream>
#include <cmath>

using namespace std;

int main ()

{
	int a= 2,b=4,c=6;
	int d;
	int x1=0;
	int x2=0;
	
	d=sqrt(b*(4*(a*c)));
	x1=((-b+d)/(2*a));
	x2=((-b-d)/(2*a));
	
	cout << " d = " << d << "\n";
	cout << " x1 = " << x1 << "\n";
	cout << " x2 = " << x1 << "\n";
	
	
	
	
return 0;
}
