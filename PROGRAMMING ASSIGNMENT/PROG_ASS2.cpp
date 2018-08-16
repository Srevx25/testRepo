/*
*NAME: <Sofia Ruth E. Vilanueva>
*DATE: <July 27, 2018>
*MODULE NAME: <Multiple choice questions>
*DESCRIPTIONn: <Select the correct answer for each of the following questions>
*ARGUMENTS: <"None">
*RETURNS: <"None">
*NOTES:
*CHANGE HISTORY:
*/

// sample
#include <iostream>
using namespace std;

int main()
{ 
	char ans[10];
	int score = 0;
	
	//Title of the program
	cout << ("\t \t Multiple Choice\n\n");
	
	//Question number 1
	cout << ("1.Expand (x-1)^2 \n\n");
	cout << " a. x^2-2x+1 \t c. x^2-1 \n b. x^2+1 \t d. x^2-2x-1 \n\n";
	
	//The user will enter the possible answer
	cout << ("Your answer is:");
   	cin  >> ans[0];
	
	     if (ans[0]=='a')
	    {
	    	cout << ("Your answer is Correct! \n\n");
	    	score++;	
	    }
	     else
	    {	
	     	cout << ("Your answer is Wrong! \n\n");	
       	}
       	
    //Question number 2
    cout << ("2.Simplify: (x^+2x)/x \n\n");
    cout << " a. 2/x \t c. x+2 \n b. 2x \t\t d. x^2+2x \n\n";
    
    //The user will enter the possible answer
    cout << ("Your answer is:");
   	cin  >> ans[0];
	
	     if (ans[0]=='c')
	    {	
	    	cout << ("Your answer is Correct! \n\n");
	    	score ++;	
	    }
	     else
	    {
	     	cout << ("Your answer is Wrong! \n\n");
       	}
    
    //Question number 3
    cout << ("3. Find the factor (x^3+8) \n\n");
    cout << " a. (x^2+4)(x-1) \t c. (x+2)(x^2-2x+4) \n";
    cout << " b. (x+2)(x^2+2x-4) \t d. (x-2)(x^2+2x-4) \n\n";
    
    //The user will enter the possible answer
    cout << ("Your answer is:");
   	cin  >> ans[0];
	
	     if (ans[0]=='c')
	    {
	    	cout << ("Your answer is Correct! \n\n");
	    	score ++;
	    }
	     else
	    {
	     	cout << ("Your answer is Wrong! \n\n");
       	}
    
    //Question number 4
    cout << ("4. Find the factor (x^2-x-2) \n\n");
    cout << " a. (x+2)(x-1) \t\t c. (x-1)(x-2) \n";
    cout << " b. (x^2-1)(x+1) \t d. (x-2)(x+1) \n\n";
    
    //The user will enter the possible answer
    cout << ("Your answer is:");
   	cin  >> ans[0];
	
	     if (ans[0]=='d')
	    {
	    	cout << ("Your answer is Correct!\n\n");
	    	score ++;
	    }
	     else
	    {
	     	cout << ("Your answer is Wrong!\n\n");
       	}
    
    //Question number 5
    cout << ("5. Find the factor (x^2-16) \n\n");
    cout << " a. (x+4)(x-4) \t c. (x+2)(x-8) \n";
    cout << " b. (x-4)(x-4) \t d. (x-16)(x+1) \n\n";
    
    //The user will enter the possible answer
    cout << ("Your answer is:");
   	cin  >> ans[0];
	
	     if (ans[0]=='d')
	    {
	    	cout << ("Your answer is Correct!\n\n");
	    	score ++;
	    }
	     else
	    {
	     	cout << ("Your answer is Wrong!\n\n");
       	}
       	
   	//indicate the score
    cout << "Your Score is:"<< score ;
    
	return 0;
}
