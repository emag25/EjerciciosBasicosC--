#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    string mars="";
    int c=0;	
	cout<<"\n INGRESE UN MENSAJE: "; 
    getline(cin >> ws,mars);  	
    for(int i=0;i<mars.length();i++){ 
            c=c+1;		
    }
    cout<<" HAY "<<c<<" CARACTERES"<<endl; 
    getch();
	return 0;
}



