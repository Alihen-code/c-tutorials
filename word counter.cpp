#include<iostream>
#include<string>
using namespace std;

int main(){
	string sentence;
	cout<<"Enter your sentence: "<<endl;
	 getline(cin,sentence);
	 int count=0;
	
	for(int i= 0;i<sentence.length();i++)
	{
		if(sentence[i]==' ')
		count++;
	}
	cout<<"The number of words in your sentence is:"<<count+1;
	return 0;
}