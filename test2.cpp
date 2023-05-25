#include<iostream>
using namespace std;

    int main(){
        int a = 5, b = 8 ;
        // comparison operators 
        cout<<"The value of a==b is: "<<(a==b)<<endl;
        cout<<"The value of a!=b is: "<<(a!=b)<<endl;
        cout<<"The value of a>=b is: "<<(a>=b)<<endl;
        cout<<"The value of a<=b is: "<<(a<=b)<<endl;
        cout<<"The value of a>b is: "<<(a>b)<<endl;
        cout<<"The value of a<b is: "<<(a<b)<<endl;

        // logical operators 
        cout<<"The folowing are logical operators in c++"<<endl;
    
        cout<<"The value of AND logical operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b)) <<endl;
        cout<<"The value of OR  logical operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b)) <<endl;
        cout<<"The value of  NOT logical operator (!(a==b) ) is: "<<(!(a==b)) <<endl;




        return 0;
    }