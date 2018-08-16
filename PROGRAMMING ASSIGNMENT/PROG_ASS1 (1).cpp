#include <iostream>
using namespace std;

int main()
{
	string FN;
	string LN;
	char MI;
	string PW;
	float EA;
	char answer [10];
	cout << ("Enter first name:");
	cin >>FN;
	cout << ("Enter last name:");
	cin >>LN;
	cout << ("Enter middle initial:");
	cin >>MI;
 cout << ("Enter Pin:");
 cin >> PW;
	cout << "Your Earnings/dollar: " << 37.638 <<endl;
	cin.get();
	cout << "Minimum Withdrawal/dollar:10"<< endl;
	cout << ("Withdraw Cash")<<endl;
    cout << ("A. Yes \t B. No")<< endl;
    cin>> answer [0];
    if (answer [0]=='A'){
    cout << "Proceed"<< endl;
        cout<< ("Enter Amount:");
        cin >>EA;
       
        if(EA>=10)
            {
	cout << ("Redeemed Successfully!");
            
	} else {
        cout << "Failed to redeem"<<endl;
    }
} else {
    cout << "Thank you"<<endl;
}
   
	return 0;
    }
