#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int suma(int a, int b);
int resta(int a, int b);
int multip(int a, int b);
int divis(int a, int b);

main() {
	int n1, n2, resulS, resulR, resulM, resulD;
		
	cout<<"\n OPERACIONES BASICAS"<<endl;
	cout<<"\n NUMERO 1: ";
	cin>>n1;
	cout<<" NUMERO 2: ";
	cin>>n2;
	
	resulS=suma(n1,n2);
	cout<<"\n LA SUMA ES: "<<resulS;
	resulR=resta(n1,n2);
	cout<<"\n LA RESTA ES: "<<resulR;
	resulM=multip(n1,n2);
	cout<<"\n EL PRODUCTO ES: "<<resulM;
	resulD=divis(n1,n2);
	cout<<"\n LA DIVISION ES: "<<resulD;
}
int suma(int a, int b) {
	return a+b;
}
int resta(int a, int b) {
	return a-b;
}
int multip(int a, int b) {
	return a*b;
}
int divis(int a, int b) {
	return a/b;
}



