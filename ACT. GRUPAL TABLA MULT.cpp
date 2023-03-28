#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
	int arreg[16],tem=0;
	
	for(int i=1;i<16;i++)
	{
		arreg[i]=i;
		cout<<"\t"<<arreg[i];
	}
	cout<<endl;
	
	for(int i=1;i<=16;i++)
	{
		cout<<"**      ";
	}
	cout << endl;
	
	for(int j=1;j<16;j++)
	{
		arreg[j]=j;
		cout<<arreg[j];
		for(int i=1;i<16;i++)
		{
			tem=i*j;
			cout << "\t"<<tem;	
		}
	cout << "\n";
	}
	
	getch();
	return 0;
}


