//2.28:: Digits of an integer.

#include<iostream>
using namespace std;
int main(){
 	int x;
 	
	cout<<"Enter four-digit number = ";
		cin>>x;
	cout<<"\n\n\n----------Your ans is below---------\n\n\n";
	
	cout<<x/1000<<"   ";
	x=x%1000;
	cout<<x/100<<"   ";;
	x=x%100;
	cout<<x/10<<"   ";;
	x=x %10;
	
	cout<<x/1<<"   ";;
	
	x=x%1;


}
