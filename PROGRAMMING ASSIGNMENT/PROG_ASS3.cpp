/*
*AUTHOR <Sofia Ruth E. Villanueva>
*DATE <August 8, 2018>
*NAME <Arithmetic and Logical connectors>
*DESCRIPTION <Application of the operations of Addition, Subtraction, Multiplication, and Division>
*/
#include <iostream>
using namespace std;
int main ()
{
    //local variable declaration:
    double A,B;
    string C;
    double D;
    char again = 'y';
    while (again=='y'||again=='Y'){
    //title
    cout << "\t \t My Simple calculator \n \n";
    
    //User guide
    cout << " Arithmitic Operators(*,/,+,-)\n";
    cout << " Logical Connectors(=,<=,>=,>,<)\n";
    cout << " True = 1 \n False = 0\n \n";
    
    //The user will enter the first number
    cout << " Enter your first number:";
    cin  >> A; 
    
    //The user will enter an operator 
    cout << " Enter the Operator or Connector:";
    cin  >> C;
    
    //The user will enter the second number
    cout << " Enter your second number:";
    cin  >> B;
    
    
    //Arithmetic Operators (+,-,/,*)
    if (C=="+")
    {
        D= (A+B);
        
        cout << "\n The answer is:"<< A << C << B<<  "=" <<D;
    }
      
     else if (C=="-")
    {
        D= (A-B);
        
        cout << "\n The answer is:"<< A << C << B<<  "=" <<D;
        
    }
    
    
    else if (C=="*")
    {
        D= (A*B);
        
        cout << "\n The answer is:"<< A << C << B<<  "=" <<D;  
    }
    
    else if (C=="/")
    {
        D= (A/B);
        
        cout << "\n The answer is:"<< A << C << B<<  "=" <<D;
        
    }
    
    //Logical Connectors ??,<=,>=,>,<)
    else if (C==">")
    {
        D= (A>B);
        
        cout << "\n The answer is:"<< A << C << B<<  "=" <<D;
        
    }
    else if (C=="<")
    {
        D= (A<B);
        
        cout << "\n The answer is:"<< A << C << B<<  "=" <<D;
        
    }
    else if (C=="=")
    {
        D=(A==B);
        
        cout << "\n The answer is:"<< A << C << B<<  "=" <<D;
        
    }
    else if (C==">=")
    {
        D= (A >= B);
        
        cout << "\n The answer is:"<< A << C << B<<  "=" <<D;
        
    }
   else if (C=="<=")
    {
        D= (A <= B);
        
        cout << "\n The answer is:"<< A << C << B<<  "=" <<D;
        
    }
    //Invalid operator will not process it
    else 
    {
       
        cout << "\n Invalid Operator!!!" << endl;
        
    
    }
    //Will go back to the Input/Ouput
    cout << " \n \n You want to try it again(y/n):";
    cin >> again;
   cout << "\n\n\n\n\n\n";  
    
    }
      
        
    return 0;
}
