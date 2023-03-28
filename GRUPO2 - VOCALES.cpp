#include <string.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main(){
	char frase[30];
	int vocal_a=0, vocal_e=0, vocal_i=0,vocal_o=0, vocal_u=0;
	
	cout<<"\n Digite una frase: ";
	cin.getline(frase,30,'\n');
	
	for(int i=0;i<30;i++){
		switch(frase[i]){
			case 'a': vocal_a++; break;
			case 'e': vocal_e++; break;
			case 'i': vocal_i++; break;
			case 'o': vocal_o++; break;
			case 'u': vocal_u++; break;
		}
	}
	cout<<"\n vocal a: "<<vocal_a<<endl;
	cout<<" vocal e: "<<vocal_e<<endl;
	cout<<" vocal i: "<<vocal_i<<endl;
	cout<<" vocal o: "<<vocal_o<<endl;
	cout<<" vocal u: "<<vocal_u<<endl;
	getch();
	return 0;
}


