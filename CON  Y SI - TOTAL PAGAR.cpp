#include<stdio.h> // Incluye la libreria "stdio.h" para usar las funciones printf y scanf
#include<conio.h> // Incluye la libreria "conio.h" para usar la funcion "getch()"

float total_pagar(int, float); // Prototipo de la funcion "total_pagar"

main() {    // Empieza el cuerpo del programa	
	int cant;  // Declara la variable "cant" como entero
	float pre;   // Declara la variavle "pre" como real
	printf("\n PRECIO: ");   // Imprime "PRECIO:"
	scanf("%f",&pre);         // Permite que el usuario ingrese un valor en "cant"
	printf("\n CANTIDAD: ");    // Imprime "CANTIDAD:"
	scanf("%d",&cant);     // Permite que el usuario ingrese un valor en "cant"
	printf("\n TOTAL A PAGAR: %.2f",total_pagar(cant,pre));// Imprime "TOTAL A PAGAR: (Llama a "total_pagar") 
	getch();     // Permite detener la pantalla cuando se ejecuta el programa
	return 0;     // Retorna el valor de 0
}

float total_pagar(int a, float b)     // Declara la funcion "total_pagar" 
{
	return a*b;       // Retorna el total a pagar que es la multiplicacion de "pre" y "cant"
}









