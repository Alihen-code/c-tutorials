# include<iostream>

using namespace std;

 int main(){
  
    /* int a=5;
    char c='g';

    cout<<"The value of a was: "<<a<<endl;
    a=45;
    cout<<"The value of is: "<<a<<endl;

    cout<<"The value of c was : "<<c<<endl;
    c='4';

    cout<<"The value of c is : "<<c<<endl; */
    // opperator presedenc
    //using the table on which operator takes presedenc over which arrange the complex equation in small brakets 
    // * usually takes prescedence over + - ---these are solved going left to right (--->) 

    int a=5, b=3;
    int c=((((a*5)+b)-34)+45);
    cout<<c<<endl;


    return 0;
 }