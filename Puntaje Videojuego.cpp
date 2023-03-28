#include<stdio.h>
#include<conio.h>

main()
{	
	char nom;
	float p;
	
	printf("\n NOMBRE DEL JUGADOR: ");
	scanf("%s",nom);
	
	printf("\n PUNTAJE: ");
	scanf("%f",p);
	
	if (p<=4) {
		printf("\n %s, PUNTAJE BAJO");
	} else {
		if (p>4 && p<=6) {
			printf("\n %s, DEBERÍAS MEJORAR");
		} else {
			if (p>=7 && p<=10) {
				printf("\n %s, ERES UN EXPERTO");
			}
		}
	}
	getch();
	return 0;
}

