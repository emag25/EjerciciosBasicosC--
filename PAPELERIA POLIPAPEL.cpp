#include<stdio.h>
#include<conio.h>
main()
{
	char nom[30];
	float vc, desc, tp;
	
	printf("\n\t\t\t -- PAPELERIA \"POLIPAPEL\" --");

	printf("\n\n  NOMBRE DEL CLIENTE: ");
	scanf("%s",&nom);

	printf("\n  VALOR DE LA COMPRA: $");
	scanf("%f",&vc);
	
	if (vc >= 50) {
		desc = vc * 0.30;
		tp = vc - desc;
		printf("\n\t\t\t     ** DESCUENTO: $%.2f", desc);
		printf("\n\t\t *** %s, EL TOTAL A PAGAR ES: $%.2f ***", nom, tp);
	}
	else {
		desc = vc * 0.15;
		tp = vc - desc;
		printf("\n\t\t\t     ** DESCUENTO: $%.2f", desc);
		printf("\n\t\t *** %s, EL TOTAL A PAGAR ES: $%.2f ***", nom, tp);
	}
	getch();
	return 0;
}


