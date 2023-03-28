#include<stdio.h>
#include<conio.h>
main()
{
	int sum;
	long prod;
	int i;
	
	sum=0;
	prod=1;
	for(i=20;i<=388;i+=2){
		sum+=i;
		prod=prod*i;
	}	
	printf("\n suma: %d",sum);
	printf("\n prod: %X",prod);
	
	getch();
	return 0;
}
