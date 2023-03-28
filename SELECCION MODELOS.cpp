#include<stdio.h>
#include<conio.h>

main()
{	
	int gen, ed, niv;
	float est;

	printf("\n\t -- SELECCION DE ASPIRANTES AL CONCURSO DE MODELAJE --");
	
	printf("\n\n\n  INGRESE 1 o 2 SEGUN SEA SU CASO");
	printf("\n    1. FEMENINO");
	printf("\n    2. MASCULINO");
	printf("\n\n  GENERO: ");
	scanf("%d",&gen);
	
	if (gen = 1) {
		
		printf("\n  EDAD: ");
		scanf("%d",&ed);
		
		if (ed >= 20 && ed <= 26) {
			
			printf("\n  ESTATURA: ");
			scanf("%f",&est);
			
			if (est >= 1.65) {
				
				printf("\n  INGRESE 1,2,3 o 4 SEGUN SEA SU CASO");
				printf("\n    1. PRIMARIA");
				printf("\n    2. SECUNDARIA");
				printf("\n    3. 3ER NIVEL o CURSANDOLO");
				printf("\n    4. 4TO NIVEL");
				printf("\n\n  NIVEL DE EDUCACION: ");
				scanf("%d",&niv);
				
				if ((niv = 3)|| (niv = 4)) {
				
				printf("\n\n\t\t  *** HA SIDO SELECCIONADA ***");
				
				}
			}
		}
	}
	getch();
	return 0;
}


