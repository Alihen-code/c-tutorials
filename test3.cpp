#include<iostream>

using namespace std;
 int c=40;
  int main(){
   //float d=34.4F;
   //long double e=34.4L;
  // cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
  // cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl;
  // cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl;
  // cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl;
  // cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl;

  /*float x=450;   //refrence varriable(jack--->jameie---->ja) //nickname of sort..pointing to the same thing like refering
  float & y=x;
  cout<<x<<endl;
  cout<<y<<endl;*/

    //Type casting----assigning value of one var to another 

    float a=60;
    int b=34.5;
    cout<<"the value of a is "<<float(b)<<endl;
    cout<<"The value of a is "<<(float)b<<endl;

    cout<<"The value of b is "<<int(a)<<endl;
    cout<<"The value of b is "<<(int)a<<endl;

    int c= int (b);
      cout<<"The expression is "<<a+b<<endl;
      cout<<"The expression is "<<a+ int(b)<<endl;
      cout<<"The expression is "<<a+(int)b<<endl;
     
     


    return 0;
  }