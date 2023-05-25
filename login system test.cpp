#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    string userName;
    string password;
    cout<<"Enter your User Name: "<<endl;
    cin>>userName;
    cout<<"Enter your Password: "<<endl;
    cin>>password;

    if(userName== "user123" && password=="123456")
    {
        cout<<"Logged in successfully";
    }
    else if(userName== "bob_the_king" && password=="qweasd123")
    {
        cout<<"Logged in successfully";
    }
    else if(userName=="admin" && password== "admin")
    {
        cout<<"Logged in successfully";
    }
    else {
        cout<<"Failed to login";
    }
    return 0;
}