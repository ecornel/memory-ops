#include<iostream>
#include "allocators.h"

using namespace std;

int main()
{
	int c,i,j,n,m[10],p[10],po[20];
	
	cout<<"Enter no. of memory partitions:\t";
	cin>>n;

	cout<<"\nEnter memory size for\n";
	for(i=1;i<=n;i++)
	{
		cout<<"\npartition no. "<<i<<" :\t";
		cin>>m[i];
		po[i]=i;
	}

	cout<<"\nEnter no. of processes:\t";
	cin>>j;

	cout<<"\nEnter memory size for\n";
	for(i=1;i<=j;i++)
	{
		cout<<"\nprocess no. "<<i<<" :\t";
		cin>>p[i];                 
	}        

	cout<<"\n******** Menu of memory management **********\n1. First fit\n2. Best fit\n3. Worst fit\nChoose an option:\t";
	cin>>c;

	switch(c)
	{
		case 1: firstFitAllocator(j, n, m, p, po); break;

		case 2: bestFitAllocator(j, n, m, p, po); break;

		case 3: worstFitAllocator(j, n, m, p, po); break;

		default: cout<<"\nEroare !!!\n";

	}

	return 0;
}
