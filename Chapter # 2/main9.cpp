//2.24:: Find even and odd number from 2 numbers.

#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter first number = ";
	cin>>x;
	cout<<"Enter second number = ";
	cin>>y;
	z=x+y;
	cout<<"\n\n\n-----------Your ans is below------------\n\n\n";
	cout<<"Your sum is = "<<z<<"\n\n";
	
	if(x%2==0){
		cout<<x<<" is an even number\n";
	}
	else{
		cout<<x<<" is an odd number\n";
	}
	
	if(y%2==0){
		cout<<y<<" is an even number\n";
	}
	else{
		cout<<y<<" is an odd number\n";
	}
	
	if(z%2==0){
		cout<<z<<" is an even number\n";
	}
	else{
		cout<<z<<" is an odd number\n";
	}
	
	
}
