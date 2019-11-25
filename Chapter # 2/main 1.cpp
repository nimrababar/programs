//2.16:: Write a program that asks the user to enter two numbers, obtain the two numbers from user and print the sum, product, difference and qoutient of the two numbers.

#include <iostream>
using namespace std;
int main(){
	float x,y;
	cout<<"Put the first number =";
	cin>>x;
	cout<<"\n"<<"Put the second number =";
	cin>>y;
	cout<<"\n\n\n"<<"----------Your answers are below----------";
	cout<<"\n\n\n"<<"Your sum is        = "<<x+y;
	cout<<"\n"<<"Your product is    = "<<x*y;
	cout<<"\n"<<"Your difference is = "<<x-y;
	cout<<"\n"<<"Your qoutient is   = "<<x/y;
}
