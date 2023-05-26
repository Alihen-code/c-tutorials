# include <iostream>
using namespace std;

int main (){
    // what is a pointer---->it is a data type that holds the address of another data type
  int a=4;
  int* b= &a;  // & means -->address of operator || * means---> (value at) dereference operator
  cout<<"the address of a is:"<<&a<<endl;
  cout<<"the address of a is:"<<b<<endl;

  //prints value 
  cout<<"the value of a is:"<<*b<<endl;
    // pointer to pointer...holds the address of pointer 
  int**c =&b;
  cout<<"The address of value b is "<<&b<<endl;
  cout<<"the address of value b is "<<c<<endl;

   cout<<"The value of b  at address c is "<<*c<<endl;
  cout<<"the value of b  at address of c is "<<**c<<endl;

    return 0;
}