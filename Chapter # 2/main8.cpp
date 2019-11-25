//2.23:: Find largest and smallest number from five integers.

#include<iostream>
using namespace std;
int main()
{
	int v,w,x,y,z,smallest,largest;
	cout<<"Enter first integer  = ";
	cin>>v;
	cout<<"Enter second integer = ";
	cin>>w;
	cout<<"Enter third integer  = ";
	cin>>x;
	cout<<"Enter fourth integer = ";
	cin>>y;
	cout<<"Enter fifth integer  = ";
	cin>>z;

	smallest=v;
	largest=v;
	
	
	//Largerst
	
	if(v>largest)
	{
		largest=v;
	}
	if(w>largest)
	{
		largest=w;
	}if(x>largest)
	{
		largest=x;
	}if(y>largest)
	{
		largest=y;
	}if(z>largest)
	{
		largest=z;
	}
	
	//Smallest
	if(v<smallest)
	{
	    smallest=v;
	}
	if(w<smallest)
	{
		smallest=w;
	}if(x<smallest)
	{
		smallest=x;
	}if(y<smallest)
	{
		smallest=y;
	}if(z<smallest)
	{
		smallest=z;
	}
	cout<<"\n\n\n------------Your ans is below-------------\n\n\n";
	cout<<"Your smallest no. is  = "<<smallest<<"\nYour Largest  no. is =  "<<largest;
	cout<<"\n\n\n";
}
