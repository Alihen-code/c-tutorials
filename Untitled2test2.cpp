#include <iostream>
using namespace std;
 int sum(int a, int b);
 void g(){
 	cout<<"Hello there ";
 }
int main(){ 
 int num1, num2;
 
 cout<<"Enter the value of Num1 ";
 cin>>num1;
 cout<<"Enter the value of Num2 ";
 cin>>num2;
 
 cout<<"\nThe sum is "<<sum(num1,num2)<<endl;
 g();


return 0;
}
int sum(int a, int b){
	int c= a+b;
	return c;
}