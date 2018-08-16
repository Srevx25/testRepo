/*
*AUTHOR <Sofia Ruth E. Villanueva>
*DATE <August 04 2018>
*NAME <Force>
*DESCRIPTION <>
*/
#include <iostream>
using namespace std;
int main ()
{
	float A,B,C,F;
	float Mass1,Mass2,Dis;
	float k=0.0000000667 ;
	cout << " Enter First Mass:";
	cin  >> Mass1;
	cout << " Enter Second Mass:";
	cin  >> Mass2;
	cout << " Enter the Distance:";
	cin  >> Dis;
	
	A=(Mass1*Mass2);
	B= (Dis*Dis);
	C=(A/B);
	F=(k*C);
	 cout << " The answer:" << F;
	
	return 0;
	
}
