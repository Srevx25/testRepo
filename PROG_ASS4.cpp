/*
*Name <Sofia Ruth E. Villanueva>
*Date <August 26, 2018>
*Module Name <Simple Math Problem>
*Description <The user will type the correct answer>
*/
#include <iostream>
#include <unistd.h>
using namespace std;
int main ()
{
    //Local Variable Declaration
    string A, B, C;
    int score = 0 ;
    string again ="yes";
    
    //Loop if the user want to try it again
    while (again=="yes"||again=="Yes"||again =="YES" ||again =="y" || again =="Y")
    {
        
    //Title
    cout << " \t Simple Math Problem \n \n ";
    sleep(2);
    cout << " Ready? \n\n";
    sleep(2);
    
    cout <<  " Please Click [ENTER]:";
    cin.get();
    
     //Problem Number 1   
    cout << " \n\n Problem 01: \n";
    cout << "  A kilo of Denorado rice cost 47.80 . If you will buy 3 and 1/2 kilos of rice. How much will it cost? \n \n";
     
    //The user will input the correct answer       
    cout << " Your Answer:";
    cin  >> A;
    
    if (A == "167.3")
    {
        cout << " Your answer is Correct \n\n";
        cout << " Correct Answer is 167.3 \n";
        score+=10;
    }
    else 
    {
        cout << " Your answer is Incorrect \n\n";
        cout << " Correct Answer is 167.3 \n";      
            
    }
    
        //Prohlem Number 2
        cout << " \n\n Problem 02: \n\n";
        cout << " Find the distance of point (3,2) to (-4,5)? \n\n";
        
      //The user will input the correct answer
      cout << " Your Answer is:";
      cin  >> B;
        
       
        if (B=="7.28")
        {
            cout << " Your answer is Correct \n\n";
        cout << " Correct Answer is 7.28 \n";
        score+=10;
    }
    else 
    {
        cout << " Your answer is Incorrect \n\n";
        cout << " Correct Answer is 7.28 \n";      
            
    }
        
      //Problem Number 3
      cout << " \n\n Problem 03: \n\n";  
      cout << " Find the hypothenus of a right triangle with the base of 3 and the adjacent of 6? \n\n"; 
       
       //The user will input the correct answer
      cout << " Your answer is:";
      cin >> C;
        
        if (C=="6.71")
        {
        cout << " Your answer is Correct \n\n";
        cout << " Correct Answer is 6.71 \n";
        score+=10;
    }
    else 
    {
        cout << " Your answer is Incorrect \n\n";
        cout << " Correct Answer is 6.71 \n";      
            
    }
        

 //This is the score         
 cout << " \n Your score is :" << score ;
  sleep(2);
      
    //if the user want to try it again  
    cout << " \n\n Do you want to try it again?(yes/no):";
        cin >> again ;
        
        
     cout << " \n\n\n\n";
    
        }
   
return 0;
}
