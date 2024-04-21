#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
    int res; 
    cout<<" Please choose the function you want to do ";
    cin >> op;
    cout<<"Pls enter two numbers: ";
   cin >> num1 >> num2;
  
  switch(op){
      case'+':
      res = num1 + num2;
      break;
      case '-':
      res = num1 - num2;
      break;
      case '*':
      res = num1 * num2;
      break;
      case '/':
      res = num1 / num2;
      break;
  }
    

   cout << res;
    return 0;
}