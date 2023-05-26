#include <iostream>
 using namespace std;

 int main(){

    int marks[2][2]={{2,4},{3,3}};
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
         cout<<"the numbers of i "<<i<<" and j "<<j<<" are "<<marks[i][j]<<endl;
      }
      
    }
    
    // int *p=marks;

   //   cout<<*(p++)<<endl;
   //   cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *p+1 is "<<*(p+1)<<endl;
   //  cout<<"The value of *p+2 is "<<*(p+2)<<endl;
  //   cout<<"The value of *p+3 is "<<*(p+3)<<endl;

      
 
 
 
 
 
 /*do
 {
    cout<<"The marks are "<<marks[i]<<endl;
    i++;
 } while (i<4);
 */

        //never do ++i insteaad do i++
 
  // while (i<4)
   // {
  //      cout<<"The marks are "<<marks[i]<<endl;
  //      i++;
  //  }
    

    /*for (int i = 0; i < 4; i++)
    {
       cout<<"The marks are "<<marks[i]<<endl;
    }
    */


   /*marks[3]=44;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;*/

    return 0;

 }