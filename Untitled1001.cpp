#include <iostream>
using namespace std;

//function overloading means to use the same name for different data types 
//and let the computer decide which one to go with depending on the value
//passed
//same function,same name but different value
void printNum(int x){
	cout<<"this is a integer"<<x<<endl;
}

void printNum(float y){
	
	cout<<"this is a floating point number"<<y<<endl;
}
int main(){
	
	int a=23;
	float b=2.3645;
	
	printNum(a);
	printNum(b);
	
	return 0;
}