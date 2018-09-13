#include<iostream>
using namespace std;
int main()
{

int mid,mid1,mid2,search;
int a[]={2,5,6,7,9};
for(int i=0;i<5;i++)
{
	cout<<a[i]<<" ";
	
}

cout<<"enter no to search";
cin>>search;
 mid= (0+4)/2;
	if(a[mid]==search)
	{
		cout<<"location is found at"<<mid;
	}
	else if(a[mid]<search)
	{
		mid1 = ((mid+1)+4)/2;
		if(a[mid1]==search)
		{
		cout<<"location is found at"<<" "<<mid1;	
		}
		else if(a[mid1]<search)
		{
			mid2= ((mid1+1)+4)/2;
			if(a[mid2]==search)
			{
			cout<<"location is found at"<<" "<<mid2;		
			}
		}
	}
	else if(a[mid]>search)
	{
		mid1 = ((mid)+0)/2;
	if(a[mid1]==search)
		{
		cout<<"location is found at"<<" "<<mid1;	
		}
		else if(a[mid1]>search)
		{
			mid2= ((mid1-1)+0)/2;
			if(a[mid2]==search)
			{
			cout<<"location is found at"<<" "<<mid2;		
			}
		}	
	}
	
}

