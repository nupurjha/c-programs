#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n>0)
	{
		return n * fact(n-1);
		
	}
	else
	{
		cout<<"entered no is not correct";
	}
}
int main()
{
	int n;
	cout<<"enter no to find factoial"<<"\n";
	cin>>n;
	
	cout<<"factorial of"<<" "<<n<<"!"<<" "<<"is"<<" "<<fact(n);
}
