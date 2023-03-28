#include<stdio.h>
#include<conio.h>

main()
{
	float v1, v2, sum;
	
	printf("\n INGRESE EL PRIMER NUMERO: ");
	scanf("%f",&v1);
	printf("\n INGRESE EL SEGUNDO NUMERO: ");
	scanf("%f",&v2);
	
	sum = (v1 + v2);
	
	printf("\n\n   ** LA SUMA ES: %.2f",sum);

getch();
return 0;
}


