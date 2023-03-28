#include<stdio.h>
#include<conio.h>

int main()
{
	int n1,n2,n3;
	
	printf("\n -- ORDENAR NUMEROS ENTEROS (MAYOR A MENOR)--");

	printf("\n\n\t  INGRESE EL 1er NUMERO: ");
	scanf("%d",&n1);
	printf("\n\t  INGRESE EL 2do NUMERO: ");
	scanf("%d",&n2);
	printf("\n\t  INGRESE EL 3er NUMERO: ");
	scanf("%d",&n3);

	if (n1 > n2 && n1 > n3){
		if (n2 > n3) {
			printf("\n\t 1) %d \n\t 2) %d \n\t 3) %d", n1,n2,n3);
		}
		else {
			if (n3 > n2) {
				printf("\n\t 1) %d \n\t 2) %d \n\t 3) %d", n1,n3,n2);
			}
			else {
				printf("\n\t\t    %d \n\n    EL SEGUNDO Y TERCER NUMERO SON IGUALES",n1);
			}
		}
	}
	else {
		if (n2 > n1 && n2 > n3){
			if (n1 > n3){
				printf("\n\t 1) %d \n\t 2) %d \n\t 3) %d", n2,n1,n3);
			}
			else {
				if (n3 > n1){
					printf("\n\t 1) %d \n\t 2) %d \n\t 3) %d", n2,n3,n1);
				}
				else {
					printf("\n\t\t    %d \n\n    EL PRIMER Y TERCER NUMERO SON IGUALES",n2);
				}
			}
		}
		else {
			if (n3 > n1 && n3 > n2){
				if (n1 > n2){
					printf("\n\t 1) %d \n\t 2) %d \n\t 3) %d", n3,n1,n2);
				}
				else {
					if (n2 > n1) {
						printf("\n\t 1) %d \n\t 2) %d \n\t 3) %d", n3,n2,n1);
					}
					else {
						printf("\n\t\t    %d \n\n    EL PRIMER Y SEGUNDO NUMERO SON IGUALES",n3);
					}
				}
			}
			else {
				if (n1 == n2 && n2 == n3) {
					printf("\n     * TODOS LOS NUMEROS SON IGUALES *");
				}
			}
		}
	}	
	
	// 	if (n1 == n2 && n1 == n3) {
	//		printf("\n\t TODOS LOS NUMEROS SON IGUALES");
	//	}
	//	else {
	//		if (n1 == n2) {
	//			printf("\n\t\t    %d \n\n    EL PRIMER Y SEGUNDO NUMERO SON IGUALES",n3);
	//		}
	//		else {
	//			if (n1 == n3) {
	//				printf("\n\t\t    %d \n\n    EL PRIMER Y TERCER NUMERO SON IGUALES",n2);
	//			}
	//			else {
	//				printf("\n\t\t    %d \n\n    EL SEGUNDO Y TERCER NUMERO SON IGUALES",n1);
	//			}
	//		}
	//	}

	
	
	getch();
	return 0;
}
