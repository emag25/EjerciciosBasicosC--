#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	
	printf("\n\t\t -- LAS 7 MARAVILLAS DEL MUNDO --");
		
	printf("\n\n  INGRESE UN NUMERO (1 - 7): ");
	scanf("%d",&num);
		
	switch (num)
      {
         case 1:
         	printf("\n  ** MACHU PICCU - PERU **");
            break;
         case 2:
         	printf("\n  ** CHICHEN ITZA - MEXICO **");
            break;
         case 3:
         	printf("\n  ** EL COLISEO DE ROMA - ITALIA **");
            break;
         case 4:
         	printf("\n  ** LA ESTATUA DEL CRISTO REDENTOR - BRASIL **");
            break;   
         case 5:
         	printf("\n  ** LA GRAN MURALLA CHINA - CHINA **");
            break;
         case 6:
         	printf("\n  ** PETRA - JORDANIA **");
            break;
         case 7:
         	printf("\n  ** TAJ MAHAL - INDIA **");
            break;  
			     	
         default:
            printf("\n\n  DEBE INGRESAR UN NUMERO DEL 1 AL 7 ");
      }
	getch();
	return 0;
}
