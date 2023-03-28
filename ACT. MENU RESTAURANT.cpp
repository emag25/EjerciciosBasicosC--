#include<stdio.h>
#include<conio.h>

int main()
{
	int op, cant;
	float pre, tp;
	
	printf("\n\t-- MENU DE RESTAURANT --");
		
	printf("\n\n     INGRESE UN NUMERO (1 - 4): ");
	scanf("%d",&op);
		
	switch (op)
      {
         case 1:
         	printf("\n  ** ARROZ CON MENESTRA Y CHULETA **");
			pre = 4.5;
			printf("\n\t     PRECIO: %.2f", pre);
			printf("\n\t     CANTIDAD: ");
			scanf("%d",&cant);      
			tp = pre * cant;
			printf("\n\t TOTAL A PAGAR: %.2f", tp);
            break;
         case 2:
         	printf("\n  ** ARROZ CON MENESTRA Y POLLO ASADO **");
         	pre = 3.5;
			printf("\n\t     PRECIO: %.2f", pre);
			printf("\n\t     CANTIDAD: ");
			scanf("%d",&cant);      
			tp = pre * cant;
			printf("\n\t TOTAL A PAGAR: %.2f", tp);         	
            break;
         case 3:
         	printf("\n     ** ARROZ CON POLLO FRITO **");
         	pre = 3.0;
			printf("\n\t     PRECIO: %.2f", pre);
			printf("\n\t     CANTIDAD: ");
			scanf("%d",&cant);      
			tp = pre * cant;
			printf("\n\t TOTAL A PAGAR: %.2f", tp);
            break;
         case 4:
         	printf("\n   ** ARROZ CON MENESTRA Y CARNE **");
         	pre = 2.5;
			printf("\n\t     PRECIO: %.2f", pre);
			printf("\n\t     CANTIDAD: ");
			scanf("%d",&cant);      
			tp = pre * cant;
			printf("\n\t TOTAL A PAGAR: %.2f", tp);
            break;     	
         default:
            printf("\n\n\t   VALOR ERRONEO\n  DEBE INGRESAR UN NUMERO DEL 1 AL 4 ");
      }
      
	getch();
	return 0;
}

