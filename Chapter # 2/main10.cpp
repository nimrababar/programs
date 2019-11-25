//2.25:: Write program for finding factor.

#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"Enter First number = ";
	cin>>x;
	cout<<"enter second number = ";
	cin>>y;
		cout<<"enter third number = ";
	cin>>z;
	
	cout<<"\n\n\n--------------Your ans is here--------------\n\n\n";
	cout<<"For first number.\n";
	if(z%x==0){
		cout<<x<<" is the multiple of "<<z<<"\n";
		
	}
	else{
		cout<<x<<" is not the multiple of "<<z<<"\n";
	}
	
	cout<<"For second number.\n";
	if(z%y==0){
		cout<<y<<" is the multiple of "<<z<<"\n";
		
	}
	else{
		cout<<y<<" is not the multiple of "<<z<<"\n";
	}
	
}
