#include<stdio.h>
#include<conio.h>
int main()
{
	int c=0, n;
	printf("\n ESCRIBE UN NUMERO: ");
	scanf("%d", &n);
	while (n > 0)
	{
		printf("\n ESCRIBE UN NUMERO: ");
		scanf("%d",&n);
		c+=1;
	}
	printf("\n LA CANTIDAD DE NUMEROS POSITIVOS SON: %d ", c);
	getch();
	return 0;
}

