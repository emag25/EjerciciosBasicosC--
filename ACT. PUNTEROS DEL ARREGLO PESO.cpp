//Realizar un programa que me permita ingresar los datos de un cliente:
//Nombre, hobby, plato favorito.
//Aplicando arreglos y luego me permita ingresar el peso de los ultimos 36 meses para obtener el peso promedio.
//Aplicar dos arreglos, uno para los datos del cliente y otro para calcular el promedio del peso.

#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Spanish");
 
	char d[3][30], **pd;
	float p[3], *pp, s=0, prom=0;
	
	pd = d;
	pp = p;
	
	cout<<"\n Ingrese su Nombre: ";
	gets(pd[0]);
	cout<<"\n Ingrese su Hobbie: ";
	gets(pd[1]);	
	cout<<"\n Ingrese su Plato favorito: ";
	gets(pd[2]);

	for (int j=3;j>0;j--) {
		cout<<"\n Ingrese su peso de hace "<<j<<" años: ";
		cin>>*pp;
		s = s + *pp;
	}	
		
	prom = s/3;
	
	cout<<"\n Nombre: "<<*pd[0]<<endl;
	cout<<"\n Hobby: "<<*pd[1]<<endl;
	cout<<"\n Plato favorito: "<<*pd[2]<<endl;
	cout<<"\n Peso promedio: "<<prom<<endl;
	
	getch();
	return 0;
}
