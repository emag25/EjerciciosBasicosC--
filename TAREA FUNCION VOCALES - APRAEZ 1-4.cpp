#include<stdio.h>
#include<conio.h>

void vocales()
{
	char vocal[] = "AEIOU";
	for(int i=0;i<5;i++)
	{
		printf("\n        %c\n",vocal[i]);
	}
}

main() 
{	 
	printf("\n LAS VOCALES SON:\n");
	vocales();
	getch();
	return 0;
}



