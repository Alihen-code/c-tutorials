#include <iostream>

using namespace std;

void PBvalue(int x){
	x=14;
}

void PBrefrence(int *x){
	*x=22;
}


int main(){
	int anddy=12;
	int danddy=11;
	
	cout<<anddy<<endl;
	cout<<danddy<<endl;
	
	PBvalue(anddy);
	PBrefrence(&danddy);//now to pass danddy into int*x youll need to use & so it passes its address 
	
	cout<<anddy<<endl;
	cout<<danddy<<endl;
	
	return 0;
}