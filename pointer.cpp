#include <iostream>
using namespace std;

int main(){
	//& refers to the address not the value, so 
	//when you write & before a var you are asking
	// for its memory address
	int fish =5;
	cout<<&fish<<endl;
	
	int *pfish;
	pfish=&fish;//this means its pointing to the memory address of fish
	cout<<*pfish<<endl;//this gives the value stored at fish
	cout<<pfish<<endl;//this simply returns the address of fish 
	return 0;
}