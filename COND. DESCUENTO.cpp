#include<stdio.h>
#include<conio.h>

int main()
{
	float pre, vp, tp, desc;
	int cant;

	printf("\n\t * INGRESE EL PRECIO DEL PRODUCTO: ");
	scanf("%f",&pre);
	printf("\n\t * INGRESE LA CANTIDAD: ");
	scanf("%d",&cant);
	
	vp = (pre * cant);
	printf("\n\n\t\t *** EL VALOR A PAGAR ES: %.2f",vp);
	
	if (vp >= 50)
	{
		desc = (vp * 0.4);
		tp = (vp - desc);
		printf("\n\n\n\t\t    *** DESCUENTO: %.2f",desc);
		printf("\n\n\t\t *** TOTAL A PAGAR: %.2f ***",tp);
	}
	
getch();
return 0;
}



