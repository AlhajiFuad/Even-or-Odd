#include <iostream>
using namespace std;

int main() 
{
	//User enters integer number.
	//Program write out if that number is an even or odd number.
	
	int number;
	
	cout<< "Please enter whole number: " <<endl;
	cin>> number;
	
	if(number % 2 == 0 )
	{
		cout<< "You have entered an EVEN Number." <<endl;
	}
	else
	{
		cout<< "You have entered an ODD Number." <<endl;
	}
		
	cout<<"THANKS.  BYE." <<endl;
	




	system("pause>0");
}
