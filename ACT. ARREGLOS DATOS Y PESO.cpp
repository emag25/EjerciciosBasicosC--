//Realizar un programa que me permita ingresar los datos de un cliento con:
//Nombre, hobby, plato favorito.
//Aplicando arreglos y luego me permita ingresar el peso de los ultimos 36 meses para obtener el peso promedio.
//Aplicar dos arreglos, uno para los datos del cliente y otro para calcular el promedio del peso

#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Spanish");
 
	char A[3][20];
	float P[3], promedio=0;
	cout<<"Ingrese su Nombre, hobby y plato favorito en su respectivo orden"<<endl;
	for (int i=0; i<3; i++)
	{ 
		gets(A[i]);
	}
	cout<<"Ingrese su peso de hace 3 años: "<<endl;
	cin>>P[0];
	cout<<"Ingrese su peso de hace 2 años: "<<endl;
	cin>>P[1];
	cout<<"Ingrese su peso de hace 1 año: "<<endl;
	cin>>P[2];
	promedio=(P[0]+P[1]+P[2])/3;
	
	cout<<"Nombre:"<<A[0]<<endl;
	cout<<"Hobby:"<<A[1]<<endl;
	cout<<"plato favorito: "<<A[2]<<endl;
	cout<<"promedio de los 3 ultimos años: "<<promedio<<endl;
	getch();
	return 0;
}
