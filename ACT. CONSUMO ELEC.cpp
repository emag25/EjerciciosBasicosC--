#include<stdio.h>
#include<conio.h>

main()
{
	float con, val, tp;
	
	printf("\n  CONSUMO EN VATIOS: ");
	scanf("%f", &con);
	printf("\n  VALOR POR VATIO: ");
	scanf("%f", &val);	
	
	tp = (con * val);
	
	printf("\n\n  * EL TOTAL A PAGAR ES: %.2f *",tp);
	
getch();
return 0;
}


