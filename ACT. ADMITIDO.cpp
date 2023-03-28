#include<stdio.h>
#include<conio.h>
int main()
{
	int ed;
	printf("\n  Ingrese su edad: ") ;
	scanf("%d",&ed);

	if (ed>=25 && ed<=35)
	{
		printf("\n  ADMITIDO") ;
	}
	else
	{
		printf("\n  NO ADMITIDO") ;
	}
	getch();
	return 0;
}


