#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int pass, con=1234, u, usu=2001;
	bool acceso = false;	
	
	do {
		system("cls");
		printf("\n\t\t ** PROGRAMA DE ACCESO **");
		printf("\n\n\t USER: ");
		scanf("%d",&u);
		printf("\t PASSWORD: ");
		scanf("%d",&pass);
		
		if ((u == 2001) && (pass == 1234)){
			acceso = true;
		} else {
			printf("\n\t * EL USER Y/O PASSWORD SON INCORRECTOS *");
			getch();				
		}
	} while (acceso == false);	

	printf("\n\t\t** BIENVENIDO AL SISTEMA **");
	
	getch();
	return 0;
}

