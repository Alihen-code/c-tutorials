#include <iostream>
using namespace std;
int bor =27;
// global variables are available to all functions but are not a 
//good choice as they keep memory all the way till the end of the programe
// but to use global variables over local variables you must use unary scope resolution operator(::)
int main(){
	
	int bor=23;
	cout<<::bor<<endl;
	return 0;
}