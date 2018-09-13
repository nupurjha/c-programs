#include<iostream>
using namespace std;
int main()
{
	int fact=1,n;
	cout<<"enter no to find factorial"<<"\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n==0 || n==1)
		{
			cout<<1;
		}
		else
		{
			fact=fact*i;
		}
		
    }
    	cout<<"factorial of"<<" "<<n<<"!"<<"\n"<<fact;
}

