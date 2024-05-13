#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	string VuId = "BC210406480";
	int fDigit = 2, lDigit = 0;
	int sum = fDigit + lDigit;
	cout<<"\n My VU ID is "<<VuId<<endl;
	cout<<"The sum of My First and Last Digit of VU ID is: "<<sum<<endl;
	if(sum>=7)
	{ 
	
		for( int i=1;i<=sum;i++)
		
		cout<<"\n Iteration "<<i<<": Welcome to VU"<<endl;
	}
	
	else
	{ 
	
		for( int i=1;i<=sum;i++)
		cout<<"\n Iteration "<<i<<": Welcome to CS201p"<<endl;
	}
	
	getch();
	return 0;
}