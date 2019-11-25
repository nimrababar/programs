//2.19:: Write a program that input three intger and prints sum,avg,product,smallest and larger number.
#include<iostream>
using namespace std;
int main()
{
	float x,y,z,sum,avg,p;
	cout<<"Put first number = ";
	cin>>x;
	cout<<"Put second number = ";
	cin>>y;
	cout<<"Put third number = ";
	cin>>z;
	sum=x+y+z;
	avg=sum/3;
	p=x*y*z;
	cout<<"\n\n\n------------Your answer is below-------------\n\n\n";
	cout<<"Your sum is     = "<<sum;
	cout<<"\nYour average is = "<<avg;
	cout<<"\nYour product is = "<<p<<endl;
	//Here coding starting for Larger
if(x>y){
		if(x>z){
			cout<<x<<" is larger"<<endl;
		}
		else{
			cout<<z<<" is larger"<<endl;
		}
	}
	else if(y>x){
		if(y>z){
		cout<<y<<" is larger"<<endl;
		}
		else{
			cout<<z<<" is larger"<<endl;
		}
	}
	
	//Here coding starting for smallest
	if(x<y){
		if(x<z){
			cout<<x<<" is smallest";
		}
		else{
			cout<<z<<" is smallest";
		}
	}
	else if(y<x){
		if(y<z){
		cout<<y<<" is smallest";
		}
		else{
			cout<<z<<" is smallest";
		}
	}





}
