//2.27:: Integer equivalent of character.
#include<iostream>
using namespace std;
int main(){
 	char x;
	cout<<"Enter an integer = ";
	cin>>x;
	cout<<static_cast<int>(x)<<" is the ASCII of "<<x;

}
