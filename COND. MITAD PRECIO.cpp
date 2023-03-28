#include<stdio.h>
#include<conio.h>

int main()
{
	int ed;
	float vb = 5.75;
	
	printf("\n\t\t\t -- BOLETERIA DE CINE --");

	printf("\n\n  INGRESE SU EDAD: ");
	scanf("%d",&ed);

	printf("\n  * EL VALOR DEL BOLETO ES: $%.2f", vb);
	
	if (ed >= 65)
	{

		printf("\n\n\n\t *** FELICIDADES, SU BOLETO SALE A MITAD DE PRECIO ***");
		printf("\n\t              *** TOTAL A PAGAR: $%.2f ***", vb/2);
	}
getch();
return 0;
}


