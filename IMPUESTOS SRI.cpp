#include<stdio.h>
#include<conio.h>

main()
{	
	char nom[30];
	float na, ifb, ife, itp;
	
	printf("\n\t     -- IMPUESTOS AL SRI --");
	
	printf("\n\n\n  NOMBRE: ");
	scanf("%s",nom);
	
	printf("\n  UTILIDAD NETA ANUAL: $");
	scanf("%f",&na);
	
	if (na >= 115290) {
		
		ifb = 22563;
		ife = (na - 115290) * 0.35;
		itp = ifb + ife;
		printf("\n\n  * IMPUESTO FRACCION BASICA: $%.2f", ifb);
		printf("\n\n  * IMPUESTO FRACCION EXCEDENTE: $%.2f", ife);
		printf("\n\n  * %s, EL IMPUESTO A PAGAR ES: $%.2f", nom, itp);
	}
	else {
		
		if (na >= 64860) {
		
			ifb = 8513;
			ife = (na - 64860) * 0.25;
			itp = ifb + ife;
			printf("\n\n  * IMPUESTO FRACCION BASICA: $%.2f", ifb);
			printf("\n\n  * IMPUESTO FRACCION EXCEDENTE: $%.2f", ife);
			printf("\n\n  * %s, EL IMPUESTO A PAGAR ES: $%.2f", nom, itp);
		}
		else {
			
			if (na >= 21630) {
		
				ifb = 949;
				ife = (na - 21630) * 0.15;
				itp = ifb + ife;
				printf("\n\n  * IMPUESTO FRACCION BASICA: $%.2f", ifb);
				printf("\n\n  * IMPUESTO FRACCION EXCEDENTE: $%.2f", ife);
				printf("\n\n  * %s, EL IMPUESTO A PAGAR ES: $%.2f", nom, itp);
			}
			else {
				
				if (na >= 11310) {
		
					ifb = 0;
					ife = (na - 11310) * 0.05;
					itp = ifb + ife;
					printf("\n\n  * IMPUESTO FRACCION BASICA: $%.2f", ifb);
					printf("\n\n  * IMPUESTO FRACCION EXCEDENTE: $%.2f", ife);
					printf("\n\n  * %s, EL IMPUESTO A PAGAR ES: $%.2f", nom, itp);
				}
				else {
					printf("\n\n  * IMPUESTO FRACCION BASICA: $%.2f", ifb);
					printf("\n\n  * IMPUESTO FRACCION EXCEDENTE: $%.2f", ife);
					printf("\n\n  * %s, USTED NO DEBE PAGAR IMPUESTOS", nom);
				}
			}
		}
	}
	getch();
	return 0;
}


