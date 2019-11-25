//2.18:: Write a program that asks the user to enter two integers obtain the number from the users then print the larger number followed by the word " is larger".If the numbers are equal print the message "These numbers are equal".

#include <iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"put your first integer = ";
	cin>>x;
	cout<<"put your second integer = ";
	cin>>y;
	cout<<"\n\n\n------------your answer--------------\n\n\n";
	if(x==y){
		cout<<"these numbers are equal";
	}
	if(x>y){
		cout<<"x is larger";
	}
	if(x<y){
		cout<<"y is larger";
	}

}
