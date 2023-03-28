#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, n2, r;
	int op;
	
	printf("\n\t\t -- OPERACIONES BASICAS --");
		
	printf("\n\n  INGRESE UN NUMERO: ");
	scanf("%f",&n1);

	printf("\n  INGRESE OTRO NUMERO: ");
	scanf("%f",&n2);
	
	printf("\n\n  ELIJA UNA OPERACION (1 - 4)");
	printf("\n    1. SUMA");
	printf("\n    2. RESTA");
	printf("\n    3. MULTIPLICACION");
	printf("\n    4. DIVISION");
	
	printf("\n\n  OPERACION: ");
	scanf("%d",&op);
		
	switch (op)
      {
         case 1:
         	r = n1 + n2;
			printf("\n\t\t   ** RESULTADO: %.2f **", r);
            break;
         case 2:
         	r = n1 - n2;
			printf("\n\t\t   ** RESULTADO: %.2f **", r);
            break;
         case 3:
         	r = n1 * n2;
			printf("\n\t\t   ** RESULTADO: %.2f **", r);            
			break;
         case 4:
         	r = n1 / n2;
			printf("\n\t\t   ** RESULTADO: %.2f **", r);            
			break;    
			     	
         default:
            printf("\n\n\t  * DEBE INGRESAR UN NUMERO DEL 1 AL 4 *");
      }
	getch();
	return 0;
}


