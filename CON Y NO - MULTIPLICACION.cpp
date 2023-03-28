#include<stdio.h> // Incluye la libreria "stdio.h" para usar las funciones "printf" y "scanf"
#include<conio.h> // Incluye la libreria "conio.h" para usar la funcion "getch"

void multiplicacion(int , int, int&); // Prototipo de la funcion "multiplicacion"

main() {    // Empieza el cuerpo del programa
	int n1,n2, mul=0;
	printf("\n NUMERO1: ");   // Imprime "NUMERO1:"
	scanf("%d",&n1);            // Permite que el usuario ingrese un valor en "n1"
	printf("\n NUMERO2: ");       // Imprime "NUMERO2:"
	scanf("%d",&n2);                 // Permite que el usuario ingrese un valor en "n2"
	multiplicacion(n1,n2,mul);         // Llama a la funcion "multiplicacion"
	printf("\n LA MULTIPLICACION ES: %d",mul);  // Imprime "lA MULTIPLICACION ES: (toma el valor de "mul")
	getch();     // Permite detener la pantalla cuando se ejecuta el programa
	return 0;     // Retorna el valor de 0
}

void multiplicacion(int a, int b, int &mul)    // Declara la funcion "multiplicacion"
{
	mul = a*b;    // realiza la multiplicacion de a*b
}







