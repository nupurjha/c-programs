#include<iostream>
using namespace std;
int main()
{
	int i,j,t,d;
	int a[]={24,23,26,25};
	cout<<"before sorting";
	for(i=0;i<4;i++)
	{
		cout<<a[i]<<",";
		
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(a[i]>a[j])
			{
			t=a[i];
			a[i]=a[j];
			a[j]=t;	
			}
		}
	}
			cout<<"after sorting";
			for(i=0;i<4;i++)
			{
				cout<<a[i]<<",";
			}
		}
	
