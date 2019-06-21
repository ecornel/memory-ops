#include <iostream>
#include "allocators.h"

using namespace std;

void firstFitAllocator(int j, int n, int* m, int* p, int* po)
{
	int i,k,l,flag,z,y,temp,temp1;

	cout<<"Results for FirstFit allocator:\n";
	for(i=1;i<=j;i++)
	{
		flag=1;
		for(k=1;k<=n;k++)
		{
			if(p[i]<=m[k])
			{
				cout<<"Process "<<i<<" whose memory size is "<<p[i]<<"KB allocated at memory partition:\t"<<po[k]<<endl;
				m[k]=m[k]-p[i];
				break;           
			}
			else
			{
				flag++;  
			}
	 	}   
	 	if(flag>n)
		{
			cout<<"Process "<<i<<" whose memory size is "<<p[i]<<"KB can't be allocated"<<endl;       
		}           
	}
}
//end firstFitAllocator()

void bestFitAllocator(int j, int n, int* m, int* p, int* po)
{
	int i,k,l,flag,z,y,temp,temp1;

	cout<<"Results for BestFit allocator:\n";
	for(y=1;y<=n;y++)
	{
		for(z=y;z<=n;z++)
		{
			if(m[y]>m[z])
			{
				temp=m[y];
				m[y]=m[z];
				m[z]=temp;
				temp1=po[y]; 
				po[y]=po[z];
				po[z]=temp1;            
			}                 
		}             
	}
	for(i=1;i<=j;i++)
	{
		flag=1;
		for(k=1;k<=n;k++)
		{
			if(p[i]<=m[k])
			{
				cout<<"Process "<<i<<" whose memory size is "<<p[i]<<"KB allocated at memory partition:\t"<<po[k]<<endl;
				m[k]=m[k]-p[i];
				break;           
			}
			else
			{
				flag++;  
			}
		}   
		if(flag>n)
		{
			cout<<"Process "<<i<<" whose memory size is "<<p[i]<<"KB can't be allocated"<<endl;
		}           
	}
}
//end bestFitAllocator()

void worstFitAllocator(int j, int n, int* m, int* p, int* po)
{
	int i,k,l,flag,z,y,temp,temp1;


	for(y=1;y<=n;y++)
	{
		for(z=y;z<=n;z++)
		{
			if(m[y]<m[z])
			{
				temp=m[y];
				m[y]=m[z];
				m[z]=temp;
				temp1=po[y]; 
				po[y]=po[z];
				po[z]=temp1;            
			}                 
		}             
	}
	for(i=1;i<=j;i++)
	{
		flag=1;
		for(k=1;k<=n;k++)
		{
			if(p[i]<=m[k])
			{
				cout<<"Process "<<i<<" whose memory size is "<<p[i]<<"KB allocated at memory partition:\t"<<po[k]<<endl;
				m[k]=m[k]-p[i];
				break;           
			}
			else
			{
				flag++;  
			}
		}   
		if(flag>n)
		{
			cout<<"Process "<<i<<" whose memory size is "<<p[i]<<"KB can't be allocated"<<endl;
		}           
	}
}
//end worstFitAllocator()

