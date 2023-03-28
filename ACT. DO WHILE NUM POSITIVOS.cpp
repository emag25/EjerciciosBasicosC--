#include<stdio.h>
#include<conio.h>
int main()
{
	int c=0, n;
	do{
		printf("\n ESCRIBE UN NUMERO: ");
		scanf("%d",&n);
		c+=1;
	} while (n > 0);
	printf("\n LA CANTIDAD DE NUMEROS POSITIVOS ES: %d", c);
	getch();
	return 0;
}

