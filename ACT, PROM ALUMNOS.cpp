#include<stdio.h>
#include<conio.h>

int main() 
{
	int e;
	float ac, n1, n2, n3, pn, pt;
	ac = 0;
	for (e=1;e<=3;e++) 
	{
		printf("\n\n\t ESTUDIANTE %d",e);
		printf("\n\n NOTA 1: ");
		scanf("%f",&n1);
		printf("\n NOTA 2: ");
		scanf("%f",&n2);
		printf("\n NOTA 3: ");
		scanf("%f",&n3);
		pn = (n1+n2+n3)/3;
		printf("\n PROMEDIO DE SUS NOTAS: %.2f",pn);
		ac = ac+pn;
	}
	pt = ac/3;
	printf("\n\n ** PROMEDIO DE LOS 3 ALUMNOS: %.2f **",pt);
	getch();
	return 0;
}

