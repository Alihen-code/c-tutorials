#include <iostream>
using namespace std;

//5! means factorial meaning 5x4x3x2x1=120

int factorialfinder(int x){
	if (x==0){
		return 1;
	}else{
		return x*factorialfinder(x-1);
	}
}

int main(){
	
	//recursive functions are a function that call itself
	//typically you dont use them becuase they never end without a base case
	//and are complicated but can be useful sometimes 
	
	cout<<factorialfinder(7)<<endl;
	
	return 0;
}