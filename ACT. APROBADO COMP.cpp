#include<stdio.h>
#include<conio.h>

main()
{
	char nom[30];
	float cal;
	
	printf("\n  * NOMBRE DEL ESTUDIANTE: ");
	scanf("%s",nom);	
	printf("\n  * CALIFICACION: ");
	scanf("%f",&cal);
	
	if (cal>=8)
	{
		if (cal<=10)
		{
			printf("\n\n    %s SU CALIFICACION ES %.2f",nom, cal);
			printf("\n            * APROBADO *");
		}
	}

	getch();
	return 0;
}
