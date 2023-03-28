#include<stdio.h>
#include<conio.h>
int main()
{
	float a, b, n, c;
	printf("\n  Ingrese la 1er nota: ") ;
	scanf("%f",&a);
	printf("\n  Ingrese la 2da nota: ");
	scanf("%f",&b);
	
	c = (a+b)/2;
	if (c>7)
	{
		n = (c + 0.5);
		printf("\n  PROMEDIO: %.2f",n) ;

	}
	getch();
	return 0;
}


