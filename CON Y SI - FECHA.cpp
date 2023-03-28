#include<stdio.h> // Incluye la libreria "stdio.h" para usar las funciones "printf" y "scanf"
#include<conio.h> // Incluye la libreria "conio.h" para usar la funcion "getch"

int suma(int , int); // Prototipo de la funcion "suma"

main() {    // Empieza el cuerpo del programa
	int n1,n2;
	printf("\n NUMERO1: ");   // Imprime "NUMERO1:"
	scanf("%d",&n1);            // Permite que el usuario ingrese un valor en "n1"
	printf("\n NUMERO2: ");       // Imprime "NUMERO2:"
	scanf("%d",&n2);     // Permite que el usuario ingrese un valor en "n2"
	printf("\n LA SUMA ES: %d",suma(n1,n2));    // Imprime "lA SUMA ES: (Llama a la funcion "suma")
	getch();     // Permite detener la pantalla cuando se ejecuta el programa
	return 0;      // Retorna el valor de 0
}

int suma(int a, int b) // Declara la funcion "sum"
{
	return a+b; // Retorna la suma de a+b
}







