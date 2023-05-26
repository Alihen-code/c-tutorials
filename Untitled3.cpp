#include<iostream>
using namespace std;
 
 void swap(int* a, int* b){ 
 int temp=*a;
 *a=*b;
 *b=temp;
 }
 
 
int main(){ 
  int x=3;
 int y=4;
 cout<<"The value of x is "<<x<<" and Y is "<<y<<endl;
 swap(&x,&y);
 cout<<"The value of x is "<<x<<" and Y is "<<y<<endl;


return 0;
}