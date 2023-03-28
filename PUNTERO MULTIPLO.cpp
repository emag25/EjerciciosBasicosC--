
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int numero, *dir_numero, residuo;
	
	cout<<"Digite un numero: "; cin>>numero; //Pedimos el numero al usuario
	
	dir_numero = &numero;
	residuo = *dir_numero % 5;
	
	if(residuo == 0   &&   *dir_numero != 0){
		cout<<"ES UN NUMERO DIVISIBLE PARA 5"<<endl;
	}
	else{
		cout<<"NO ES UN NUMERO DIVISIBLE PARA 5"<<endl;
	}
	
	cout<<"Posicion: "<<dir_numero<<endl;
	
	getch();
	return 0;
}
