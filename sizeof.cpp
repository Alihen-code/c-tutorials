#include <iostream>
using namespace std;

int main(){
	char c;
	int a;
	double banto[10];
	//sizeof can be helpul in finding out how much memory space a
	// specific variable or element in a array 
	// is taking in 
	//comuter memory 
	cout<<sizeof(c)<<endl;
	cout<<sizeof(a)<<endl;
	cout<<sizeof(banto)<<endl;
	cout<<sizeof(banto)/sizeof(banto[0])<<endl; //if you want to know the number of elements 
	// simply divide the sizeof array by the sizeof one element 
	return 0;
}