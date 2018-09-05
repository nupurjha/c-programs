#include<iostream>
using namespace std;
int main()
{


int a[]={2,5,6,7};
for(int i=0;i<4;i++)
{
	cout<<a[i]<<" ";
	
}
int search;
cout<<"enter no to search";
cin>>search;
for(int i=0;i<4;i++)
{
	if(a[i]==search)
	{
		cout<<"location is found at"<<i;
	}
	
}
}
