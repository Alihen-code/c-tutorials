# include<iostream>
using namespace std;
   


int main(){
    //******Refrence variables*****

    //float x=45;
   // float &y=x;
   // cout<<x<<endl;
   // cout<<y<<endl; ------sizeof operator simply displays the size of the value being asked about like sizeof(34.5)


   // [::] scope resolution operator is used to access the global variable 

   int a=45;
   float b=45.46;
   cout<<"The value of a is "<<(float)a<<endl;
   cout<<"The value of b is "<<(int)b<<endl;
   int c= (int)b;
   cout<<"The value of c is "<<c<<endl;

   cout<<endl;
   cout<<"The expression is "<<a+b<<endl;
   cout<<"The expression is "<<a+(int)b<<endl;
   cout<<"The expression is "<<a+int(b)<<endl;


    return 0;
}