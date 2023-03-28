#include<stdio.h> // Incluye la libreria "stdio.h" para usar la funcion "printf"
#include<conio.h> // Incluye la libreria "conio.h" para usar la funcion "getch"

char nom(); // Prototipo de la funcion "nom"

main() {       // Empieza el cuerpo del programa
	nom();      // Llama a la funcion "nom"
	printf("\n MI NOMBRE ES: EMELY");
	getch();     // Permite detener la pantalla cuando se ejecuta el programa
	return 0;     // Retorna el valor de 0
}

char nom()     // Declara la funcion "nom"
{
	char nombre[]="EMELY";       // Declara variables y asigna parametros
	printf("\n MI NOMBRE ES: %s",nombre);    // Imprime la el nombre
	return nom();          // Retorna la funcion nom
}



