#include<conio.h>
#include<stdio.h>

main()
{
	int n, r;
	printf("\n  * INGRESE UN NUMERO: ");
	scanf("%d",&n);
	
	r=n%3;
	
	if(r == 0   &&   n != 0)
	{
		printf("\n\n  * ES UN NUMERO DIVISIBLE PARA 3 *");
	}
	
getch();
return 0;
}


