#include<iostream>
using namespace std;
int fact(int n)
{
		
		 if(n>0)
		{
			 
			return( fact(n-1)+fact(n-2));
			
		}
		else
		{
			cout<<"entered no is not correct";
		}
	}
	int main()
	{
		int n;
	cout<<"enter no"<<"\n";
	cin>>n;
	cout<<"factorial of"<<" "<<n<<"!"<<" "<<"is"<<" "<<fact(n);
	}
