#include<stdio.h>
#include<conio.h>

main()
{	
	char nom[30];
	float p;
	
	printf("\n  NOMBRE DEL JUGADOR: ");
	scanf("%s",nom);
	
	printf("\n  PUNTAJE: ");
	scanf("%f",&p);
	
	if (p <= 4) {
		printf("\n\n  * %s, PUNTAJE BAJO *", nom);
	} else {
		if (p >4 && p <= 6) {
			printf("\n\n  * %s, DEBERIAS MEJORAR *", nom);
		} else {
			if (p >= 7 && p <= 10) {
				printf("\n\n   * %s, ERES UN EXPERTO *", nom);
			}
		}
	}
	getch();
	return 0;
}


