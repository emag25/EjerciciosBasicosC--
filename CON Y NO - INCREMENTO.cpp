#include<stdio.h> // Incluye la libreria "stdio.h" para usar las funciones "printf" y "scanf"
#include<conio.h> // Incluye la libreria "conio.h" para usar la funcion "getch"

void incrementa5(int&); // Prototipo de la funcion "incrementa5"

main() {    // Empieza el cuerpo del programa
	int i;
	printf("\n NUMERO: ");   // Imprime "NUMERO:"
	scanf("%d",&i);       // Permite que el usuario ingrese un valor en "i"
	incrementa5(i);    // Llama a la funcion "incrementa5"
	printf("\n EL INCREMENTO EN 5 ES: %d",i);  // Imprime "EL INCREMENTO EN 5 ES: (valor de "i+5")
	getch();     // Permite detener la pantalla cuando se ejecuta el programa
	return 0;     // Retorna el valor de 0
}

void incrementa5(int &n) // Declara la funcion "incrementa5"
{
	n=n+5; // realiza la incremento de en 5 unidades
}








