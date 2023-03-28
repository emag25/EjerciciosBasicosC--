#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<fstream>
#include<stdlib.h>

using namespace std;

	ofstream Esc;
	ifstream Lec;
void nada();
void registrosvacios();
void tablacarros2();
void gotoxy(int X, int Y);
void cuadrovacio();
void mostrarc();
void Menu();
void Menu2();
void carroestatico();
void carrosalida();
void color_txt(int colorf, int colort);
void ocultarc();
void carroentrada();
void optimus();
void optimus2();
void optimus3();
void optimus4();
void prime();

bool verifica(string ubi){
	string Ubi,Nom,Ape,Ced;
	ifstream leer("Personas.txt",ios::in);
	
	getline(leer,Ubi);
	while(!leer.eof()){
		if(Ubi == ubi){
			ocultarc();
			gotoxy(5,24);cout<<"----------------------------------------";
			gotoxy(5,25);cout<<"Ubicacion en uso, escoja otra ubicacion.";
			gotoxy(5,26);cout<<"----------------------------------------";
			getch();
			leer.close();
			return false;
		}
		getline(leer,Nom);
		getline(leer,Ape);
		getline(leer,Ced);
		getline(leer,Ubi);
	}
	leer.close();
	return true;
}

void verRegistros(ifstream &Lec){
	registrosvacios();
	color_txt(0,14);
	string Ubi,Nom,Ape,Ced;
	int i=57, j=3;
	Lec.open("Personas.txt",ios::in);
	gotoxy(65,2);cout<<"-----------------Registros---------------"<<endl<<endl;
	getline(Lec,Ubi);
	while(!Lec.eof()){
		getline(Lec,Nom);
		getline(Lec,Ape);
		getline(Lec,Ced);
		if(Ubi=="A1"){
			color_txt(0,4);
		gotoxy(58,3);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (5,5); printf("A1");
		color_txt(0,14);}
		
		else if(Ubi=="A2"){
			color_txt(0,4);
		gotoxy(58,4);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (10,5); printf("A2");
		color_txt(0,14);}
		
		else if(Ubi=="A3"){
			color_txt(0,4);
		gotoxy(58,5);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (14,5); printf("A3");
		color_txt(0,14);}
		
		else if(Ubi=="A4"){
			color_txt(0,4);
		gotoxy(58,6);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (18,5); printf("A4");
		color_txt(0,14);}
		
		else if(Ubi=="A5"){
			color_txt(0,4);
		gotoxy(58,7);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (22,5); printf("A5");
		color_txt(0,14);}
		
		else if(Ubi=="A6"){
			color_txt(0,4);
		gotoxy(58,8);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (26,5); printf("A6");
		color_txt(0,14);}
		
		else if(Ubi=="A7"){
			color_txt(0,4);
		gotoxy(58,9);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (30,5); printf("A7");
		color_txt(0,14);}
		
		else if(Ubi=="A8.1"){
			color_txt(0,4);
		gotoxy(58,10);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (43,4); printf("A8.1");
		color_txt(0,14);}
		
		else if(Ubi=="A8.2"){
		color_txt(0,4);			
		gotoxy(58,11);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (43,6); printf("A8.2");
		color_txt(0,14);}
		
		else if(Ubi=="B1"){
			color_txt(0,4);
		gotoxy(58,12);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (5,8); printf("B1");
		color_txt(0,14);}
		
		else if(Ubi=="B2"){
			color_txt(0,4);
		gotoxy(58,13);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (44,8); printf("B2");
		color_txt(0,14);}
		
		else if(Ubi=="C1"){
			color_txt(0,4);
		gotoxy(58,14);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (5,10); printf("C1");
		color_txt(0,14);}
		
		else if(Ubi=="C2"){
			color_txt(0,4);
		gotoxy(58,15);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (44,10); printf("C2");
		color_txt(0,14);}
		
		else if(Ubi=="D1"){
			color_txt(0,4);
		gotoxy(58,16);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (5,12); printf("D1");
		color_txt(0,14);}
		
		else if(Ubi=="D2"){
			color_txt(0,4);
		gotoxy(58,17);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (44,12); printf("D2");
		color_txt(0,14);}
		
		else if(Ubi=="E1"){
			color_txt(0,4);
		gotoxy(58,18);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (5,14); printf("E1");
		color_txt(0,14);}
		
		else if(Ubi=="E2"){
			color_txt(0,4);
		gotoxy(58,19);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (18,14); printf("E2");
		color_txt(0,14);}
		
		else if(Ubi=="E3"){
			color_txt(0,4);
		gotoxy(58,20);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (22,14); printf("E3");
		color_txt(0,14);}
		
		else if(Ubi=="E4"){
			color_txt(0,4);
		gotoxy(58,21);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (26,14); printf("E4");
		color_txt(0,14);}
		
		else if(Ubi=="E5"){
			color_txt(0,4);
		gotoxy(58,22);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (30,14); printf("E5");
		color_txt(0,14);}
		
		else if(Ubi=="E6"){
			color_txt(0,4);
		gotoxy(58,23);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (44,14); printf("E6");
		color_txt(0,14);}
		
		else if(Ubi=="F1"){
			color_txt(0,4);
		gotoxy(58,24);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (5,16); printf("F1");
		color_txt(0,14);}
		
		else if(Ubi=="F2"){
			color_txt(0,4);
		gotoxy(89,3);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (18,16); printf("F2");
		color_txt(0,14);}
		
		
		else if(Ubi=="F3"){
			color_txt(0,4);
		gotoxy(89,4);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (22,16); printf("F3");
		color_txt(0,14);}
		
		else if(Ubi=="F4"){
			color_txt(0,4);
		gotoxy(89,5);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (26,16); printf("F4");
		color_txt(0,14);}
		
		else if(Ubi=="F5"){
			color_txt(0,4);
		gotoxy(89,6);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (30,16); printf("F5");
		color_txt(0,14);}
		
		else if(Ubi=="F6"){
			color_txt(0,4);
		gotoxy(89,7);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (44,16); printf("F6");
		color_txt(0,14);}
		
		else if(Ubi=="G1"){
			color_txt(0,4);
		gotoxy(89,8);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (5,18); printf("G1");
		color_txt(0,14);}
		
		else if(Ubi=="G2"){
			color_txt(0,4);
		gotoxy(89,9);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (44,18); printf("G2");
		color_txt(0,14);}
		
		else if(Ubi=="H1"){
			color_txt(0,4);
		gotoxy(89,10);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (5,20); printf("H1");
		color_txt(0,14);}
		
		else if(Ubi=="H2"){
			color_txt(0,4);
		gotoxy(89,11);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (44,20); printf("H2");
		color_txt(0,14);}
		
		else if(Ubi=="I1"){
			color_txt(0,4);
		gotoxy(89,12);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (5,22); printf("I1");
		color_txt(0,14);}
		
		else if(Ubi=="I2"){
			color_txt(0,4);
		gotoxy(89,13);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (44,22); printf("I2");
		color_txt(0,14);}
		
		else if(Ubi=="J1"){
			color_txt(0,4);
		gotoxy(89,14);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (5,25); printf("J1");
		color_txt(0,14);}
		
		else if(Ubi=="J2"){
			color_txt(0,4);
		gotoxy(89,15);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (10,25); printf("J2");
		color_txt(0,14);}
		
		else if(Ubi=="J3"){
			color_txt(0,4);
		gotoxy(89,16);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (14,25); printf("J3");
		color_txt(0,14);}
		
		else if(Ubi=="J4"){
			color_txt(0,4);
		gotoxy(89,17);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (18,25); printf("J4");
		color_txt(0,14);}
		
		else if(Ubi=="J5"){
			color_txt(0,4);
		gotoxy(89,18);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (22,25); printf("J5");
		color_txt(0,14);}
		
		else if(Ubi=="J6"){
			color_txt(0,4);
		gotoxy(89,19);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (26,25); printf("J6");
		color_txt(0,14);}
		
		else if(Ubi=="J7"){
			color_txt(0,4);
		gotoxy(89,20);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (30,25); printf("J7");
		color_txt(0,14);}
		
		else if(Ubi=="J8"){
			color_txt(0,4);
		gotoxy(89,21);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (34,25); printf("J8");
		color_txt(0,14);}
		
		else if(Ubi=="J9"){
			color_txt(0,4);
		gotoxy(89,22);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (38,25); printf("J9");
		color_txt(0,14);}
		
		else if(Ubi=="J10"){
			color_txt(0,4);
		gotoxy(89,23);cout<<Ubi<<": "<<Nom<<" "<<Ape<<endl;
		gotoxy (43,25); printf("J10");
		color_txt(0,14);}
		
		getline(Lec,Ubi);
	}
	Lec.close();
}

void ingreso(ofstream &es){
	system("cls");
	
	//CUADRO GENERAL 
	//lineas verticales y horizontales del cuadro general
	color_txt(0,4);
	for(int i=0;i<113;i=i+7){
	gotoxy (i,1); printf("%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205);
	gotoxy (i,29); printf("%c%c%c%c%c%c%c",205,205,205,205,205,205,205);
	}
	//ESQUINAS del cuadro general
	gotoxy (0,1); printf("%c",201);
	gotoxy (119,1); printf("%c",187);
	gotoxy (119,29); printf("%c",188);
	gotoxy (0,29); printf("%c",200);
	
	for(int j=2;j<=28;j=j+1){
	gotoxy (0,j); printf("%c",186);
	gotoxy (119,j); printf("%c",186);
	}
	
	verRegistros(Lec);
	nada();
	color_txt(0,9);
	gotoxy (2,4);  printf("######  ##  ##  ######  ######  /#####  /#####  /####%C",92);
		system("color 0");
	gotoxy (2,5);  printf("######  ##%C ##  ######  ######  ######  ######  ######",92);
		system("color 0");
	gotoxy (2,6);  printf("  ##    ### ##  ##      ##  ##  ##      ##%C     ##  ##",92);
	system("color 0");
	gotoxy (2,7);  printf("  ##    ###%C##  ## ###  ##  ##  %C###    %C##%C    ##  ##",92,92,92,92);
	system("color 0");
	gotoxy (2,8);  printf("  ##    ##%C###  ## ###  ######  /###     %C##%C   ##  ##",92,92,92);
	system("color 0");
	gotoxy (2,9); printf("  ##    ## ###  ##  ##  ###%C    ##        %C##   ##  ##",92,92);
	system("color 0");
	gotoxy (2,10); printf("######  ## %C##  ######  ##%C##   ######  ######  ######",92,92);
	system("color 0");
	gotoxy (2,11); printf("######  ##  ##  ######  ## %C##  %C#####  #####/  %C####/",92,92,92);
	color_txt(0,14);
	
	ofstream Esc;
	string Ubi,Nom,Ape,Ced;
		
	es.open("Personas.txt",ios::out | ios::app);
	
	
	
	gotoxy(5,15);cout<<"Ingrese Ubicacion:";
	gotoxy(75,28);printf("PARA REGRESAR DEBE ESCRIBIR LA PALABRA MENU");
	do{
		mostrarc();
	fflush(stdin);
	gotoxy(25,15);getline(cin,Ubi);
	fflush(stdout);
	ocultarc();
	if (Ubi=="MENU" || Ubi=="Menu" || Ubi=="menu") {
		es.close();
		system("cls");
		ocultarc();
		Menu2();
	
}
	}while(Ubi=="");
	
	if(Ubi=="A1" || Ubi=="A2" || Ubi=="A3" || Ubi=="A4" || Ubi=="A5" || Ubi=="A6" || Ubi=="A7" || Ubi=="A8.1" || Ubi=="A8.2" || Ubi=="B1" || 
	Ubi=="B2" || Ubi=="C1" || Ubi=="C2" || Ubi=="D1" || Ubi=="D2" || Ubi=="E1" || Ubi=="E2" || Ubi=="E3" || Ubi=="E4" || Ubi=="E5" || Ubi=="E6" || 
	Ubi=="F1" || Ubi=="F2" || Ubi=="F3" || Ubi=="F4" || Ubi=="F5" || Ubi=="F6" || Ubi=="G1" || Ubi=="G2" || Ubi=="H1" || Ubi=="H2" || Ubi=="I1" || 
	Ubi=="I2" || Ubi=="J1" || Ubi=="J2" || Ubi=="J3" || Ubi=="J4" || Ubi=="J5" || Ubi=="J6" || Ubi=="J7" || Ubi=="J8" || Ubi=="J9" || Ubi=="J10"){
		if(verifica(Ubi)){
			mostrarc();
			gotoxy(8,17);cout<<"Ingrese Nombre:";
			gotoxy(6,19);cout<<"Ingrese Apellido:";
			gotoxy(9,21);cout<<"Ingrese Clave:";
			do{
				gotoxy(25,17);getline(cin,Nom);
			}while(Nom=="");
			gotoxy(6,19);cout<<"Ingrese Apellido:";
			do{
				gotoxy(25,19);getline(cin,Ape);
			}while(Ape=="");
			gotoxy(9,21);cout<<"Ingrese Clave:";
			do{
				gotoxy(25,21);getline(cin,Ced);
			}while(Ced=="");
		
		ocultarc();
			es<<Ubi<<endl<<Nom<<endl<<Ape<<endl<<Ced<<endl;
		}
		else{
			es.close();
			return ingreso(Esc);
		}
		
	es.close();
	}
	else{//Si Ubi no es ninguno de esos valores retorna al ingreso
	es.close();
		return ingreso(Esc);
	}
	ocultarc();
}

void elimina(ifstream &Lec){
	system("cls");
	
	//CUADRO GENERAL 
	//lineas verticales y horizontales del cuadro 
	color_txt(0,4);
	for(int i=0;i<113;i=i+7){
	gotoxy (i,1); printf("%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205);
	gotoxy (i,29); printf("%c%c%c%c%c%c%c",205,205,205,205,205,205,205);
	}
	//ESQUINAS del cuadro general
	gotoxy (0,1); printf("%c",201);
	gotoxy (119,1); printf("%c",187);
	gotoxy (119,29); printf("%c",188);
	gotoxy (0,29); printf("%c",200);
	
	for(int j=2;j<=28;j=j+1){
	gotoxy (0,j); printf("%c",186);
	gotoxy (119,j); printf("%c",186);
	}
	verRegistros(Lec);
	nada();
	color_txt(0,9);
	gotoxy (2,4);  printf("/#####  /####%C  ###     ######  ####%C   /####%C",92,92,92);
		system("color 0");
	gotoxy (2,5);  printf("######  ######  ###     ######  #####%C  ######",92);
		system("color 0");
	gotoxy (2,6);  printf("##%C     ##  ##  ###       ##    ## %C##  ##  ##",92,92);
	system("color 0");
	gotoxy (2,7);  printf("%C##%C    ##  ##  ###       ##    ##  ##  ##  ##",92,92);
	system("color 0");
	gotoxy (2,8);  printf(" %C##%C   ######  ###       ##    ##  ##  ######",92,92);
	system("color 0");
	gotoxy (2,9); printf("  %C##   ######  ###       ##    ## /##  ######",92);
	system("color 0");
	gotoxy (2,10); printf("######  ##  ##  ######  ######  #####/  ##  ##");
	system("color 0");
	gotoxy (2,11); printf("#####/  ##  ##  ######  ######  ####/   ##  ##");
	color_txt(0,14);
	
	
	
	string Ubi,Nom,Ape,Ced;
	Lec.open("Personas.txt",ios::in);
	ofstream aux("auxiliar.txt",ios::out);
	string ubiaux,cedaux;
	char tecla;
	int opcion=1;
	bool encontrado = false;
	
	mostrarc();
	
	fflush(stdin);
	gotoxy(5,13);cout<<"Digite la ubicacion:";
	gotoxy(75,28);printf("PARA REGRESAR DEBE ESCRIBIR LA PALABRA MENU");
		do{
		fflush(stdin);
		gotoxy(27,13);getline(cin,ubiaux);
		fflush(stdin);
	if(ubiaux=="MENU" || ubiaux=="Menu" || ubiaux=="menu") {
		Lec.close();
		aux.close();
		remove("auxiliar.txt");
		system("cls");
		ocultarc();
		return Menu2();	
		}
	}while(ubiaux=="");


	if(ubiaux=="A1" || ubiaux=="A2" || ubiaux=="A3" || ubiaux=="A4" || ubiaux=="A5" || ubiaux=="A6" || ubiaux=="A7" || ubiaux=="A8.1" || ubiaux=="A8.2" || 
	ubiaux=="B1" || ubiaux=="B2" || ubiaux=="C1" || ubiaux=="C2" || ubiaux=="D1" || ubiaux=="D2" || ubiaux=="E1" || ubiaux=="E2" || ubiaux=="E3" || 
	ubiaux=="E4" || ubiaux=="E5" || ubiaux=="E6" || ubiaux=="F1" || ubiaux=="F2" || ubiaux=="F3" || ubiaux=="F4" || ubiaux=="F5" || ubiaux=="F6" || 
	ubiaux=="G1" || ubiaux=="G2" || ubiaux=="H1" || ubiaux=="H2" || ubiaux=="I1" || ubiaux=="I2" || ubiaux=="J1" || ubiaux=="J2" || ubiaux=="J3" || ubiaux=="J4" || 
	ubiaux=="J5" || ubiaux=="J6" || ubiaux=="J7" || ubiaux=="J8" || ubiaux=="J9" || ubiaux=="J10"){
		gotoxy(4,23);printf("SI LA CLAVE ES INCORRECTA SE LO ENVIARA AL MENU.");
		gotoxy(4,24);printf("DE ESTA MANERA SE EVITARA UNA SALIDA NO DESEADA");
		gotoxy(9,15);cout<<"Digite la clave:";
		fflush(stdin);
		gotoxy(27,15);getline(cin,cedaux);
		fflush(stdin);
		gotoxy(4,23);printf("                                                ");
		gotoxy(4,24);printf("                                               ");
		

		getline(Lec,Ubi);
		while(!Lec.eof()){
			getline(Lec,Nom);
			getline(Lec,Ape);
			getline(Lec,Ced);
			
			if(Ubi == ubiaux && Ced == cedaux){
				gotoxy(5,17);cout<<"--------------------Registro--------------------"<<endl;
				gotoxy(5,19);cout<<"Ubicacion---: "<<Ubi<<endl;
				gotoxy(5,20);cout<<"Nombre------: "<<Nom<<endl;
				gotoxy(5,21);cout<<"Apellido----: "<<Ape<<endl;
				gotoxy(5,22);cout<<"Clave-------: "<<Ced<<endl;
				
				ocultarc();
				system("color 0");
				gotoxy(25,25);cout<<"DESEA SACAR SU AUTO?";
				color_txt(6,0);
				gotoxy(25,27);cout<<" SI ";
				color_txt(0,4);
				gotoxy(30,27);cout<<" NO ";
						
				encontrado = true;
				
				while(opcion!='z'){
				tecla=getch();
				if(tecla==77 && opcion==1) opcion=2;
				else if (tecla==75 && opcion==2) opcion=1;
				else if (tecla==77 && opcion==2) opcion=1;
				else if (tecla==75 && opcion==1) opcion=2;	
				else if (opcion==1 && tecla==13) opcion=3;
				else if (opcion==2 && tecla==13) opcion=4;
				switch(opcion){
					case 1:
						ocultarc();
						
					color_txt(6,0);
					gotoxy(25,27);cout<<" SI ";
					color_txt(0,4);
					gotoxy(30,27);cout<<" NO ";
					break;
					
					case 2:
						ocultarc();
				color_txt(0,4);
				gotoxy(25,27);cout<<" SI ";
				color_txt(6,0);
				gotoxy(30,27);cout<<" NO ";
					break;
					
					case 3:
						ocultarc();
						color_txt(0,4);
						gotoxy(5,25);cout<<"-------------------";
						gotoxy(5,26);cout<<"Registro eliminado.";
						gotoxy(5,27);cout<<"-------------------";
						getch();
						opcion='z';
						
					break;
					case 4:
						ocultarc();
						color_txt(0,4);
						gotoxy(5,25);cout<<"----------------";
						gotoxy(5,26);cout<<"Registro en uso.";
						gotoxy(5,27);cout<<"----------------";
						aux<<Ubi<<endl<<Nom<<endl<<Ape<<endl<<Ced<<endl;
						getch();
						opcion='z';
						
					break;
					}
				}
			
			}
			else{
				aux<<Ubi<<endl<<Nom<<endl<<Ape<<endl<<Ced<<endl;
			}
			getline(Lec,Ubi);
		}
		Lec.close();
		aux.close();
		remove("Personas.txt");
		rename("auxiliar.txt","Personas.txt");
		
		if(!encontrado){
			ocultarc();
			gotoxy(5,25);cout<<"-----------------------";
			gotoxy(5,26);cout<<"Registro no encontrado.";
			gotoxy(5,27);cout<<"-----------------------";
			getch();
		}
	
	}
	
	else{
		Lec.close();
		aux.close();
		remove("auxiliar.txt");
		return elimina(Lec);
	}
	ocultarc();
	
}

int main(){
	ocultarc();
	Menu();
	return 0;
	
}

void Menu(){
		//CARRITO DE ENTRADA
	system("color 3");
	system("color 0");
	color_txt(0,4);
	//CUADRO GENERAL 
	//lineas verticales y horizontales del cuadro general
	for(int i=0;i<113;i=i+7){
	gotoxy (i,1); printf("%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205);
	gotoxy (i,29); printf("%c%c%c%c%c%c%c",205,205,205,205,205,205,205);
	system("color 0");
	}
	//ESQUINAS del cuadro general
	gotoxy (0,1); printf("%c",201);
	gotoxy (119,1); printf("%c",187);
	gotoxy (119,29); printf("%c",188);
	gotoxy (0,29); printf("%c",200);
	
	for(int j=2;j<=28;j=j+1){
	gotoxy (0,j); printf("%c",186);
	gotoxy (119,j); printf("%c",186);
	system("color 0");
	}
	
	
	color_txt(0,9);
	gotoxy (2,5);  printf("/####  /####  ######  /####%C  ######  ######  /####%C  ##  ##  /####%C  ##   ##  ######  /####  ##  ##  ######  /####%c",92,92,92,92);
		system("color 0");
	gotoxy (2,6);  printf("#####  #####  ######  ######  ######  ######  ######  ##%C ##  ######  ##%C /##  ######  #####  ##%C ##  ######  ######",92,92,92);
		system("color 0");
	gotoxy (2,7);  printf("##     ##       ##    ##  ##  ##        ##    ##  ##  ### ##  ##  ##  ### ###    ##    ##     ### ##    ##    ##  ##");
	system("color 0");
	gotoxy (2,8);  printf("%C##%C%C   ##      ##    ######  ##        ##    ##  ##  ###%C##  ######  ## # ##    ##    %C##%C%C  ###%C##    ##    ##  ##",92,92,92,92,92,92,92,92);
	system("color 0");
	gotoxy (2,9);  printf("###//    ##     ##    ######  ##        ##    ##  ##  ##%C###  ######  ## V ##    ##    ###//  ##%C###    ##    ##  ##",92,92);
	system("color 0");
	gotoxy (2,10); printf("/##       ##    ##    ##  ##  ##        ##    ##  ##  ## ###  ##  ##  ##   ##    ##    /##    ## ###    ##    ##  ##");
	system("color 0");
	gotoxy (2,11); printf("#####  #####    ##    ##  ##  ######  ######  ######  ## %C##  ##  ##  ##   ##  ######  #####  ## %C##    ##    ######",92,92);
	system("color 0");
	gotoxy (2,12); printf("%C####  ####/    ##    ##  ##  ######  ######  %C####/  ##  ##  ##  ##  ##   ##  ######  %C####  ##  ##    ##    %c####/",92,92,92,92);
	

	color_txt(0,6);
	gotoxy (50,15);  printf(" ESTACIONAMIENTO ");
	system("color 0");
	color_txt(0,4);
	gotoxy (50,18);  printf("REGISTRAR INGRESO");
	system("color 0");
	color_txt(0,4);
	gotoxy (50,21);  printf("REGISTRAR SALIDA ");
	system("color 0");
	color_txt(0,4);
	gotoxy (50,24);  printf("SALIR DEL SISTEMA");
	
	
	carroentrada();
		
	
	char tecla;
	int opcion=1;
	color_txt(11,0);

	while(opcion!='z'){
	tecla=getch();
	if(tecla==80 && opcion==1) opcion=2;
	else if (tecla==72 && opcion==2) opcion=1;
	else if (tecla==80 && opcion==2) opcion=3;
	else if (tecla==72 && opcion==3) opcion=2;	
	else if (tecla==80 && opcion==3) opcion=4;
	else if (tecla==72 && opcion==4) opcion=3;	
	else if (tecla==80 && opcion==4) opcion=1;
	else if (tecla==72 && opcion==1) opcion=4;
	else if (opcion==1 && tecla==13) opcion=5;
	else if (opcion==2 && tecla==13) opcion=6;
	else if (opcion==3 && tecla==13) opcion=7;
	else if (opcion==4 && tecla==13) opcion=8;
	
	switch(opcion)
		{
		case 1: color_txt(0,6);
	gotoxy (50,15);  printf(" ESTACIONAMIENTO ");
	color_txt(0,4);
	gotoxy (50,18);  printf("REGISTRAR INGRESO");
	gotoxy (50,21);  printf("REGISTRAR SALIDA ");
	gotoxy (50,24);  printf("SALIR DEL SISTEMA");
	break;
	
	
		case 2: color_txt(0,4);
	gotoxy (50,15);  printf(" ESTACIONAMIENTO ");
	color_txt(0,6);
	gotoxy (50,18);  printf("REGISTRAR INGRESO");
	color_txt(0,4);
	gotoxy (50,21);  printf("REGISTRAR SALIDA ");
	gotoxy (50,24);  printf("SALIR DEL SISTEMA");
		break;
		
		
		case 3: color_txt(0,4);
	gotoxy (50,15);  printf(" ESTACIONAMIENTO ");
	gotoxy (50,18);  printf("REGISTRAR INGRESO");
	color_txt(0,6);
	gotoxy (50,21);  printf("REGISTRAR SALIDA ");
	color_txt(0,4);
	gotoxy (50,24);  printf("SALIR DEL SISTEMA");
		break;
		
		case 4: color_txt(0,4);
	gotoxy (50,15);  printf(" ESTACIONAMIENTO ");
	gotoxy (50,18);  printf("REGISTRAR INGRESO");
	gotoxy (50,21);  printf("REGISTRAR SALIDA ");
	color_txt(0,6);
	gotoxy (50,24);  printf("SALIR DEL SISTEMA");
	color_txt(0,4);
		break;
		
		case 5:
		system("cls");
		ocultarc();
		tablacarros2();
		getch();
		system("cls");
		Menu2();
		break;
		
		case 6:
		system("cls");
		ocultarc();
		ingreso(Esc);
		gotoxy(5,24);cout<<"----------------------------------";
		gotoxy(5,25);cout<<"Ingreso registrado correctamente!.";
		gotoxy(5,26);cout<<"----------------------------------";
		system("pause");
		system("cls");
		Menu2();
		break;
		
		case 7:
		system("cls");
		ocultarc();
		elimina(Lec);
		system("cls");
		Menu2();
		break;
		
		case 8:
		carrosalida();
		system("cls");
		prime();
		exit(-1);
		opcion='z';	
		break;
		}
	}
}

void color_txt(int colorf, int colort){

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorf*16+colort); 
}

void ocultarc(){
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
void mostrarc(){
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = TRUE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void carrosalida(){
	for(int i=104; i>2; i=i-3){
		color_txt(0,13);
	gotoxy (i,25); printf("     ___");
	gotoxy (i,26); printf(" ..-/_/ |-%C",187);
	gotoxy (i,27); printf("'(')---(')'");
	system("color 0");
	gotoxy (i,25); printf("         ");
	gotoxy (i,26); printf("               ");
	gotoxy (i,27); printf("               ");}
	
	gotoxy (2,25); printf("     ___");
	gotoxy (2,26); printf(" ..-/_/ |-%C",187);
	gotoxy (2,27); printf("'(')---(')'");
}

void cuadrovacio(){
	
		color_txt(0,14);
		gotoxy (34,4); printf("ENTRADA");
		gotoxy (34,5); printf("   Y   ");
		gotoxy (34,6); printf("SALIDA ");
		//nombre A
		color_txt(0,14);
		gotoxy (5,5); printf("A1");
		gotoxy (10,5); printf("A2");
		gotoxy (14,5); printf("A3");
		gotoxy (18,5); printf("A4");
		gotoxy (22,5); printf("A5");
		gotoxy (26,5); printf("A6");
		gotoxy (30,5); printf("A7");
		gotoxy (43,4); printf("A8.1");
		gotoxy (43,6); printf("A8.2");
		
		//nombre B
		gotoxy (5,8); printf("B1");
		gotoxy (44,8); printf("B2");

		//nombre C
		gotoxy (5,10); printf("C1");
		gotoxy (44,10); printf("C2");

		//nombre D
		gotoxy (5,12); printf("D1");
		gotoxy (44,12); printf("D2");

		//nombre E
		gotoxy (5,14); printf("E1");
		gotoxy (18,14); printf("E2");
		gotoxy (22,14); printf("E3");
		gotoxy (26,14); printf("E4");
		gotoxy (30,14); printf("E5");
		gotoxy (44,14); printf("E6");

		//nombre F
		gotoxy (5,16); printf("F1");
		gotoxy (18,16); printf("F2");
		gotoxy (22,16); printf("F3");
		gotoxy (26,16); printf("F4");
		gotoxy (30,16); printf("F5");
		gotoxy (44,16); printf("F6");

		//nombre G
		gotoxy (5,18); printf("G1");
		gotoxy (44,18); printf("G2");

		//nombre H
		gotoxy (5,20); printf("H1");
		gotoxy (44,20); printf("H2");

		//nombre I
		gotoxy (5,22); printf("I1");
		gotoxy (44,22); printf("I2");

		//nombre J
		gotoxy (5,25); printf("J1");
		gotoxy (10,25); printf("J2");
		gotoxy (14,25); printf("J3");
		gotoxy (18,25); printf("J4");
		gotoxy (22,25); printf("J5");
		gotoxy (26,25); printf("J6");
		gotoxy (30,25); printf("J7");
		gotoxy (34,25); printf("J8");
		gotoxy (38,25); printf("J9");
		gotoxy (43,25); printf("J10");
		
		}
		
void carroentrada(){
	for(int i=2; i<105; i=i+3){
		color_txt(0,13);
	gotoxy (i,25); printf("   ___");
	gotoxy (i,26); printf("%C-/ %C_%C-..",218,92,92);
	gotoxy (i,27); printf("'(')---(')'");
	system("color 0");
	gotoxy (i,25); printf("   ");
	gotoxy (i,26); printf("   ",218,92);
	gotoxy (i,27); printf("   ");
}
	color_txt(0,13);
	gotoxy (105,25); printf("   ___");
	gotoxy (105,26); printf("%C-/ %C_%C-..",218,92,92);
	gotoxy (105,27); printf("'(')---(')'");	
}
		
void gotoxy(int X, int Y){
	HANDLE hCon; 
	COORD dwPos;
	
	dwPos.X = X;
	dwPos.Y = Y;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon,dwPos);
}

void carroestatico(){
color_txt(0,13);
	gotoxy (105,25); printf("   ___");
	gotoxy (105,26); printf("%C-/ %C_%C-..",218,92,92);
	gotoxy (105,27); printf("'(')---(')'");	
}

void tablacarros2(){
	system("color 8");
		color_txt(0,12);
	//CUADRO GENERAL 
	//lineas verticales y horizontales del cuadro general
	for(int i=0;i<119;i=i+3){
	gotoxy (i,1); printf("%c%c%c",205,205,205);
	gotoxy (i,29); printf("%c%c%c",205,205,205);
	}
	for(int j=2;j<=28;j=j+1){
	gotoxy (0,j); printf("%c",186);
	gotoxy (119,j); printf("%c",186);
	
	}
	//ESQUINAS del cuadro general
	gotoxy (0,1); printf("%c",201);
	gotoxy (119,1); printf("%c",187);
	gotoxy (119,29); printf("%c",188);
	gotoxy (0,29); printf("%c",200);
	
	color_txt(0,3);
	//CUADRO DE PARQUEO
	for(int i=2; i<48 ; i++){  // Lineas horizontales 
		gotoxy (i,3); printf("%c",205);
		gotoxy (i,23); printf("%c",205);
		gotoxy (i,27); printf("%c",205);
	}
	for(int i=2; i<33 ; i++){
	gotoxy (i,7); printf("%c",205);
}
	gotoxy (33,7); printf("%c",188);
	
	for (int i=4; i<27 ; i++){  //lineas verticales
		gotoxy (2,i); printf("%c",186);
		gotoxy (9,i); printf("%c",186);
		gotoxy (41,i); printf("%c",186);
		gotoxy (48,i); printf("%c",186);
		}
	
	
	 //lineas internas
	for(int i=3; i<9 ; i++){  // Lineas horizontales 
		gotoxy (i,7); printf("%c",205);
		gotoxy (i,9); printf("%c",205);
		gotoxy (i,11); printf("%c",205);
		gotoxy (i,13); printf("%c",205);
		gotoxy (i,15); printf("%c",205);
		gotoxy (i,17); printf("%c",205);
		gotoxy (i,19); printf("%c",205);
		gotoxy (i,21); printf("%c",205);
		gotoxy (i,23); printf("%c",205);
	}
	   // Lineas horizontales de la primera y ultima columna
	    gotoxy (42,5); printf("%c%c%c%c%c%c",205,205,205,205,205,205);
		gotoxy (42,7); printf("%c%c%c%c%c%c",205,205,205,205,205,205);
		gotoxy (42,9); printf("%c%c%c%c%c%c",205,205,205,205,205,205);
		gotoxy (42,11); printf("%c%c%c%c%c%c",205,205,205,205,205,205);
		gotoxy (42,13); printf("%c%c%c%c%c%c",205,205,205,205,205,205);
		gotoxy (42,15); printf("%c%c%c%c%c%c",205,205,205,205,205,205);
		gotoxy (42,17); printf("%c%c%c%c%c%c",205,205,205,205,205,205);
		gotoxy (42,19); printf("%c%c%c%c%c%c",205,205,205,205,205,205);
		gotoxy (42,21); printf("%c%c%c%c%c%c",205,205,205,205,205,205);
		gotoxy (42,23); printf("%c%c%c%c%c%c",205,205,205,205,205,205);
		
		// Fila 1
		for (int i=4; i<7 ; i++){  //lineas verticales
		gotoxy (13,i); printf("%c",186);
		gotoxy (17,i); printf("%c",186);
		gotoxy (21,i); printf("%c",186);
		gotoxy (25,i); printf("%c",186);
		gotoxy (29,i); printf("%c",186);
		gotoxy (33,i); printf("%c",186);
		}	
		// Ultima fila
	for (int i=24; i<27 ; i++){  //lineas verticales
		gotoxy (13,i); printf("%c",186);
		gotoxy (17,i); printf("%c",186);
		gotoxy (21,i); printf("%c",186);
		gotoxy (25,i); printf("%c",186);
		gotoxy (29,i); printf("%c",186);
		gotoxy (33,i); printf("%c",186);
		gotoxy (37,i); printf("%c",186);
		}
		//ESQUINAS
		gotoxy(2,3); printf("%c",201);
		gotoxy(2,27); printf("%c",200);
		gotoxy(48,3); printf("%c",187);
		gotoxy(48,27); printf("%c",188);		
		//CUADRO INTERMEDIO DEL PARQUEO
		gotoxy (17,12); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
		gotoxy (17,15); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
		gotoxy (17,18); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
			for (int i=13; i<18 ; i++){  //lineas verticales
		gotoxy (17,i); printf("%c",186);
		gotoxy (21,i); printf("%c",186);
		gotoxy (25,i); printf("%c",186);
		gotoxy (29,i); printf("%c",186);
		gotoxy (33,i); printf("%c",186);
		}	
		//LINEAS INTERNAS DEL CUADRO INTERNO 
		gotoxy(21,12); printf("%c",203);
		gotoxy(25,12); printf("%c",203);
		gotoxy(29,12); printf("%c",203);
		gotoxy(21,18); printf("%c",202);
		gotoxy(25,18); printf("%c",202);
		gotoxy(29,18); printf("%c",202);
		gotoxy(21,15); printf("%c",206);
		gotoxy(25,15); printf("%c",206);
		gotoxy(29,15); printf("%c",206);	
		gotoxy(33,15); printf("%c",185);
		gotoxy(17,15); printf("%c",204);
		
		
			//ESQUINAS
	gotoxy(17,12); printf("%c",201);
	gotoxy(17,18); printf("%c",200);
	gotoxy(33,12); printf("%c",187);
	gotoxy(33,18); printf("%c",188);
	//Rellenar los espacios entre filas y columnas
		//fila 
		gotoxy(13,7); printf("%c",202);
		gotoxy(17,7); printf("%c",202);
		gotoxy(21,7); printf("%c",202);
		gotoxy(25,7); printf("%c",202);
		gotoxy(29,7); printf("%c",202);	
		gotoxy(9,27); printf("%c",202);
		gotoxy(13,27); printf("%c",202);
		gotoxy(17,27); printf("%c",202);
		gotoxy(21,27); printf("%c",202);
		gotoxy(25,27); printf("%c",202);
		gotoxy(29,27); printf("%c",202);	
		gotoxy(33,27); printf("%c",202);
		gotoxy(37,27); printf("%c",202);
		gotoxy(41,27); printf("%c",202);
		gotoxy(9,3); printf("%c",203);
		gotoxy(13,3); printf("%c",203);
		gotoxy(17,3); printf("%c",203);
		gotoxy(21,3); printf("%c",203);
		gotoxy(25,3); printf("%c",203);
		gotoxy(29,3); printf("%c",203);	
		gotoxy(33,3); printf("%c",203);
		gotoxy(41,3); printf("%c",203);
		gotoxy(13,23); printf("%c",203);
		gotoxy(17,23); printf("%c",203);
		gotoxy(21,23); printf("%c",203);
		gotoxy(25,23); printf("%c",203);
		gotoxy(29,23); printf("%c",203);	
		gotoxy(33,23); printf("%c",203);
		gotoxy(37,23); printf("%c",203);
		
		//cruz
		gotoxy(9,7); printf("%c",206);
		gotoxy(9,23); printf("%c",206);
		gotoxy(41,23); printf("%c",206);
		
		//COLUMNAS
		gotoxy(9,9); printf("%c",185);
		gotoxy(9,11); printf("%c",185);
		gotoxy(9,13); printf("%c",185);
		gotoxy(9,15); printf("%c",185);
		gotoxy(9,17); printf("%c",185);
		gotoxy(9,19); printf("%c",185);
		gotoxy(9,21); printf("%c",185);
		gotoxy(48,5); printf("%c",185);		
		gotoxy(48,7); printf("%c",185);
		gotoxy(48,9); printf("%c",185);
		gotoxy(48,11); printf("%c",185);
		gotoxy(48,13); printf("%c",185);
		gotoxy(48,15); printf("%c",185);
		gotoxy(48,17); printf("%c",185);
		gotoxy(48,19); printf("%c",185);
		gotoxy(48,21); printf("%c",185);	
		gotoxy(48,23); printf("%c",185);	
		//COLUMNAS SEGUNDA PARTE
		gotoxy(2,7); printf("%c",204);
		gotoxy(2,9); printf("%c",204);
		gotoxy(2,11); printf("%c",204);
		gotoxy(2,13); printf("%c",204);
		gotoxy(2,15); printf("%c",204);
		gotoxy(2,17); printf("%c",204);
		gotoxy(2,19); printf("%c",204);
		gotoxy(2,21); printf("%c",204);
		gotoxy(2,23); printf("%c",204);
		
		gotoxy(41,7); printf("%c",204);
		gotoxy(41,9); printf("%c",204);
		gotoxy(41,11); printf("%c",204);
		gotoxy(41,13); printf("%c",204);
		gotoxy(41,15); printf("%c",204);
		gotoxy(41,17); printf("%c",204);
		gotoxy(41,19); printf("%c",204);
		gotoxy(41,21); printf("%c",204);
		
		cuadrovacio();
		verRegistros(Lec);
		getch();
		system("cls");
		Menu2();
}

void prime(){
system("color 7");
char tecla;
optimus();	
do{

	tecla=getch();
	
optimus2();
optimus3();
optimus4();
optimus();
	
}while(tecla!=13);

}

void optimus(){
	
	color_txt(0,4);
	gotoxy (21,2);	printf("%c%c%c%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (21,3);	printf("%c%c%c%c%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (22,4);	printf("%c%c%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186,186,124);
gotoxy (22,5);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (23,6);	printf("%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186);
gotoxy (23,7);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (24,8);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186);
gotoxy (24,9);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (25,10);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (33,4);	printf("%c_",92);
gotoxy (34,5);	printf("%c%c%c:._",92,186,186);
gotoxy (39,6);	printf("%c%c%c:._",92,186,186);
gotoxy (44,7);	printf("%c%c:.",92,186);

gotoxy (31,6);	printf("%c_",92);
gotoxy (32,7);	printf("%c%c%c:._",92,186,186);
gotoxy (37,8);	printf("%c%c%c:._",92,186,186);

gotoxy (47,8);	printf("%c%c",92,92);
gotoxy (48,9);	printf("%c%c",92,92);
gotoxy (49,10);	printf("%c%c",92,92);


gotoxy (32,7);	printf("%c_",92);
gotoxy (33,8);	printf("%c%c%c:._",92,186,186);
gotoxy (38,9);	printf("%c%c%c:._",92,186,186);
gotoxy (44,10);	printf("%c%c:._",92,186);
gotoxy (47,11);	printf("%c%c%c%c%c",186,92,186,92,92);

gotoxy (30,9);	printf("%c_",92);
gotoxy (32,10);	printf("%c%c:._",186,186);
gotoxy (29,11);	printf("^-._%c%c%c%c%c%c:._",92,186,186,186,186,186);
gotoxy (34,12);	printf("^-._%c%c%c%c%c%c:::%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186,186,186,92);





gotoxy (26,13);	printf("%c%c%c%c^-._",92,186,186,186);
gotoxy (27,14);	printf("%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,124);
gotoxy (27,15);	printf("%c%c%c%c%c%c%c%c|",124,186,186,186,186,186,186,186);
gotoxy (28,16);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (28,17);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (29,18);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186);
gotoxy (29,19);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (30,20);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (30,21);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (31,22);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);

gotoxy (31,16);	printf("%c%c%c%c%c%c%c",186,186,186,186,186,186,92);
gotoxy (34,17);	printf("%c%c%c%c%c%c",186,186,186,186,186,92);
gotoxy (37,18);	printf("%c%c%c%c%c",186,186,186,186,92);
gotoxy (33,19);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (33,20);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (33,21);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (33,22);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (34,23);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (37,24);	printf("%c%c%c%c%c",92,186,186,186,124);
gotoxy (40,25);	printf("%c%c",92,124);


color_txt (0,7);
gotoxy (51,16);	printf("/|");
gotoxy (49,17);	printf("/%c%c|",186,186);
gotoxy (47,18);	printf("/%c%c%c%c|",186,186,186,186);
gotoxy (45,19);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (45,20);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (45,21);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (45,22);	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (45,23);	printf("%c%c%c%c%c%c%c/",124,186,186,186,186,186,186);
gotoxy (45,24);	printf("%c%c%c%c%c%c/",124,186,186,186,186,186);
gotoxy (45,25);	printf("%c%c%c%c%c/",124,186,186,186,186);
gotoxy (46,26);	printf("%c%c%c/",92,186,186);
gotoxy (47,27);	printf("%c/",92);

gotoxy (65,16);	printf("|%c",92);
gotoxy (65,17);	printf("|%c%c%c",186,186,92);
gotoxy (65,18);	printf("|%c%c%c%c%c",186,186,186,186,92);
gotoxy (65,19);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (65,20);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (65,21);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (53,22);	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (65,23);	printf("%c%c%c%c%c%c%c|",92,186,186,186,186,186,186);
gotoxy (66,24);	printf("%c%c%c%c%c%c|",92,186,186,186,186,186);
gotoxy (67,25);	printf("%c%c%c%c%c|",92,186,186,186,186);
gotoxy (68,26);	printf("%c%c%c/",92,186,186);
gotoxy (69,27);	printf("%c/",92);



gotoxy (54,8);	printf("%c%c      %c/",92,186,186);
gotoxy (54,9);	printf("|%c%c    %c%c|",186,186,186,186);
gotoxy (55,10);	printf("%c%c%c  /%c/",92,186,92,186);
gotoxy (56,11);	printf("|%c  %c|",186,186);
gotoxy (57,12);	printf("%c%c//",92,92);
gotoxy (57,13);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,14);	printf("%c%c%c%c",186,186,186,186);



gotoxy (57,15);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,16);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,17);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,18);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,19);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,20);	printf("%c%c%c%c",186,186,186,186);


gotoxy (54,25);	printf("/%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,92);
gotoxy (53,26);	printf("/%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,92);
gotoxy (52,27);	printf("/%c%c%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,186,186,92);

gotoxy (42,0);	printf("_.-^%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c^-._",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (37,1);	printf("_.-^%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c^-._",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (36,2);	printf("|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (37,3);  printf("^-._%c%c%c%c^-._",186,186,186,186);
gotoxy (41,4);  printf("^-._%c%c%c%c^-._",186,186,186,186);
gotoxy (45,5);  printf("^-._%c%c%c%c^-._",186,186,186,186);
gotoxy (49,6);  printf("^-._%c%c%c%c%c",186,186,186,186,92);
gotoxy (58,7);  printf("%c/",92);

gotoxy (68,3);  printf("_.-^%c%c%c%c_.-^",186,186,186,186);
gotoxy (64,4);  printf("_.-^%c%c%c%c_.-^",186,186,186,186);
gotoxy (61,5);  printf("_.-^%c%c%c%c_.-^",186,186,186,186);
gotoxy (60,6);  printf("/%c%c%c%c_.-^",186,186,186,186);

color_txt(0,1);

gotoxy (85,2);	printf("|%c%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186,186);
gotoxy (85,3);	printf("%c%c%c%c%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (85,4);	printf("|%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186);
gotoxy (88,5);	printf("/%c%c%c%c%c%c|",186,186,186,186,186,186);
gotoxy (86,6);	printf("%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186);
gotoxy (86,7);	printf("/%c%c%c%c%c%c|",186,186,186,186,186,186);
gotoxy (86,8);	printf("/%c%c%c%c%c/",186,186,186,186,186);
gotoxy (85,9);	printf("/%c%c%c%c%c%c|",186,186,186,186,186,186);
gotoxy (84,10);	printf("|%c%c%c%c%c%c/",186,186,186,186,186,186);
gotoxy (83,4);	printf("_/");
gotoxy (78,5);	printf("_.:%c%c/",186,186);
gotoxy (73,6);	printf("_.:%c%c/",186,186);
gotoxy (70,7);	printf(".:%c/",186);

gotoxy (85,6);	printf("_/");
gotoxy (80,7);	printf("_.:%c/",186);
gotoxy (75,8);	printf("_.:%c%c/",186,186);

gotoxy (69,8);	printf("//");
gotoxy (68,9);	printf("//");
gotoxy (67,10);	printf("//");


gotoxy (85,7);	printf(" /");
gotoxy (79,8);	printf("_.:%c%c/",186,186);
gotoxy (73,9);	printf("/_.:%c%c/",186,186);
gotoxy (69,10);	printf("_.:%c/",186);
gotoxy (66,11);	printf("//%c/%c",186,186);

gotoxy (84,9);	printf("_/");
gotoxy (80,10);	printf("_.:%c%c",186,186);
gotoxy (75,11);	printf("_.%c%c%c%c%c/:_.-^",186,186,186,186,186);
gotoxy (65,12);	printf("/%c%c%c%c%c:::%c%c%c%c%c/_.-^",186,186,186,186,186,186,186,186,186,186);


gotoxy (83,13);	printf("_.-^%c%c%c/",92,186,186,186);
gotoxy (81,14);	printf("%c%c%c%c%c%c%c%c/",124,186,186,186,186,186,186,186);
gotoxy (81,15);	printf("|%c%c%c%c%c%c%c|",186,186,186,186,186,186,186);
gotoxy (79,16);	printf("/%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186);
gotoxy (77,17);	printf("/%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,124);
gotoxy (75,18);	printf("/%c%c%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186,186,186);
gotoxy (75,19);	printf("|%c%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (75,20);	printf("|%c%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186,186,186);
gotoxy (75,21);	printf("|%c%c%c%c%c%c%c%c%c%c|",186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (75,22);	printf("|%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186);

gotoxy (75,23);	printf("%c%c%c%c%c%c%c/",124,186,186,186,186,186,186);
gotoxy (75,24);	printf("%c%c%c%c/",124,186,186,186);
gotoxy (75,25);	printf("|/");
}

void optimus2(){
	
	color_txt(0,2);
	gotoxy (21,2);	printf("%c%c%c%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (21,3);	printf("%c%c%c%c%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (22,4);	printf("%c%c%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186,186,124);
gotoxy (22,5);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (23,6);	printf("%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186);
gotoxy (23,7);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (24,8);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186);
gotoxy (24,9);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (25,10);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (33,4);	printf("%c_",92);
gotoxy (34,5);	printf("%c%c%c:._",92,186,186);
gotoxy (39,6);	printf("%c%c%c:._",92,186,186);
gotoxy (44,7);	printf("%c%c:.",92,186);

gotoxy (31,6);	printf("%c_",92);
gotoxy (32,7);	printf("%c%c%c:._",92,186,186);
gotoxy (37,8);	printf("%c%c%c:._",92,186,186);

gotoxy (47,8);	printf("%c%c",92,92);
gotoxy (48,9);	printf("%c%c",92,92);
gotoxy (49,10);	printf("%c%c",92,92);


gotoxy (32,7);	printf("%c_",92);
gotoxy (33,8);	printf("%c%c%c:._",92,186,186);
gotoxy (38,9);	printf("%c%c%c:._",92,186,186);
gotoxy (44,10);	printf("%c%c:._",92,186);
gotoxy (47,11);	printf("%c%c%c%c%c",186,92,186,92,92);

gotoxy (30,9);	printf("%c_",92);
gotoxy (32,10);	printf("%c%c:._",186,186);
gotoxy (29,11);	printf("^-._%c%c%c%c%c%c:._",92,186,186,186,186,186);
gotoxy (34,12);	printf("^-._%c%c%c%c%c%c:::%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186,186,186,92);





gotoxy (26,13);	printf("%c%c%c%c^-._",92,186,186,186);
gotoxy (27,14);	printf("%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,124);
gotoxy (27,15);	printf("%c%c%c%c%c%c%c%c|",124,186,186,186,186,186,186,186);
gotoxy (28,16);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (28,17);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (29,18);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186);
gotoxy (29,19);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (30,20);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (30,21);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (31,22);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);

gotoxy (31,16);	printf("%c%c%c%c%c%c%c",186,186,186,186,186,186,92);
gotoxy (34,17);	printf("%c%c%c%c%c%c",186,186,186,186,186,92);
gotoxy (37,18);	printf("%c%c%c%c%c",186,186,186,186,92);
gotoxy (33,19);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (33,20);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (33,21);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (33,22);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (34,23);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (37,24);	printf("%c%c%c%c%c",92,186,186,186,124);
gotoxy (40,25);	printf("%c%c",92,124);


color_txt (0,7);
gotoxy (51,16);	printf("/|");
gotoxy (49,17);	printf("/%c%c|",186,186);
gotoxy (47,18);	printf("/%c%c%c%c|",186,186,186,186);
gotoxy (45,19);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (45,20);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (45,21);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (45,22);	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (45,23);	printf("%c%c%c%c%c%c%c/",124,186,186,186,186,186,186);
gotoxy (45,24);	printf("%c%c%c%c%c%c/",124,186,186,186,186,186);
gotoxy (45,25);	printf("%c%c%c%c%c/",124,186,186,186,186);
gotoxy (46,26);	printf("%c%c%c/",92,186,186);
gotoxy (47,27);	printf("%c/",92);

gotoxy (65,16);	printf("|%c",92);
gotoxy (65,17);	printf("|%c%c%c",186,186,92);
gotoxy (65,18);	printf("|%c%c%c%c%c",186,186,186,186,92);
gotoxy (65,19);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (65,20);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (65,21);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (53,22);	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (65,23);	printf("%c%c%c%c%c%c%c|",92,186,186,186,186,186,186);
gotoxy (66,24);	printf("%c%c%c%c%c%c|",92,186,186,186,186,186);
gotoxy (67,25);	printf("%c%c%c%c%c|",92,186,186,186,186);
gotoxy (68,26);	printf("%c%c%c/",92,186,186);
gotoxy (69,27);	printf("%c/",92);



gotoxy (54,8);	printf("%c%c      %c/",92,186,186);
gotoxy (54,9);	printf("|%c%c    %c%c|",186,186,186,186);
gotoxy (55,10);	printf("%c%c%c  /%c/",92,186,92,186);
gotoxy (56,11);	printf("|%c  %c|",186,186);
gotoxy (57,12);	printf("%c%c//",92,92);
gotoxy (57,13);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,14);	printf("%c%c%c%c",186,186,186,186);



gotoxy (57,15);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,16);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,17);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,18);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,19);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,20);	printf("%c%c%c%c",186,186,186,186);


gotoxy (54,25);	printf("/%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,92);
gotoxy (53,26);	printf("/%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,92);
gotoxy (52,27);	printf("/%c%c%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,186,186,92);

gotoxy (42,0);	printf("_.-^%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c^-._",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (37,1);	printf("_.-^%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c^-._",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (36,2);	printf("|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (37,3);  printf("^-._%c%c%c%c^-._",186,186,186,186);
gotoxy (41,4);  printf("^-._%c%c%c%c^-._",186,186,186,186);
gotoxy (45,5);  printf("^-._%c%c%c%c^-._",186,186,186,186);
gotoxy (49,6);  printf("^-._%c%c%c%c%c",186,186,186,186,92);
gotoxy (58,7);  printf("%c/",92);

gotoxy (68,3);  printf("_.-^%c%c%c%c_.-^",186,186,186,186);
gotoxy (64,4);  printf("_.-^%c%c%c%c_.-^",186,186,186,186);
gotoxy (61,5);  printf("_.-^%c%c%c%c_.-^",186,186,186,186);
gotoxy (60,6);  printf("/%c%c%c%c_.-^",186,186,186,186);

color_txt(0,9);

gotoxy (85,2);	printf("|%c%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186,186);
gotoxy (85,3);	printf("%c%c%c%c%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (85,4);	printf("|%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186);
gotoxy (88,5);	printf("/%c%c%c%c%c%c|",186,186,186,186,186,186);
gotoxy (86,6);	printf("%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186);
gotoxy (86,7);	printf("/%c%c%c%c%c%c|",186,186,186,186,186,186);
gotoxy (86,8);	printf("/%c%c%c%c%c/",186,186,186,186,186);
gotoxy (85,9);	printf("/%c%c%c%c%c%c|",186,186,186,186,186,186);
gotoxy (84,10);	printf("|%c%c%c%c%c%c/",186,186,186,186,186,186);
gotoxy (83,4);	printf("_/");
gotoxy (78,5);	printf("_.:%c%c/",186,186);
gotoxy (73,6);	printf("_.:%c%c/",186,186);
gotoxy (70,7);	printf(".:%c/",186);

gotoxy (85,6);	printf("_/");
gotoxy (80,7);	printf("_.:%c/",186);
gotoxy (75,8);	printf("_.:%c%c/",186,186);

gotoxy (69,8);	printf("//");
gotoxy (68,9);	printf("//");
gotoxy (67,10);	printf("//");


gotoxy (85,7);	printf(" /");
gotoxy (79,8);	printf("_.:%c%c/",186,186);
gotoxy (73,9);	printf("/_.:%c%c/",186,186);
gotoxy (69,10);	printf("_.:%c/",186);
gotoxy (66,11);	printf("//%c/%c",186,186);

gotoxy (84,9);	printf("_/");
gotoxy (80,10);	printf("_.:%c%c",186,186);
gotoxy (75,11);	printf("_.%c%c%c%c%c/:_.-^",186,186,186,186,186);
gotoxy (65,12);	printf("/%c%c%c%c%c:::%c%c%c%c%c/_.-^",186,186,186,186,186,186,186,186,186,186);


gotoxy (83,13);	printf("_.-^%c%c%c/",92,186,186,186);
gotoxy (81,14);	printf("%c%c%c%c%c%c%c%c/",124,186,186,186,186,186,186,186);
gotoxy (81,15);	printf("|%c%c%c%c%c%c%c|",186,186,186,186,186,186,186);
gotoxy (79,16);	printf("/%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186);
gotoxy (77,17);	printf("/%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,124);
gotoxy (75,18);	printf("/%c%c%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186,186,186);
gotoxy (75,19);	printf("|%c%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (75,20);	printf("|%c%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186,186,186);
gotoxy (75,21);	printf("|%c%c%c%c%c%c%c%c%c%c|",186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (75,22);	printf("|%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186);

gotoxy (75,23);	printf("%c%c%c%c%c%c%c/",124,186,186,186,186,186,186);
gotoxy (75,24);	printf("%c%c%c%c/",124,186,186,186);
gotoxy (75,25);	printf("|/");
}

void optimus3(){

	color_txt(0,5);
	gotoxy (21,2);	printf("%c%c%c%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (21,3);	printf("%c%c%c%c%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (22,4);	printf("%c%c%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186,186,124);
gotoxy (22,5);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (23,6);	printf("%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186);
gotoxy (23,7);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (24,8);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186);
gotoxy (24,9);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (25,10);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (33,4);	printf("%c_",92);
gotoxy (34,5);	printf("%c%c%c:._",92,186,186);
gotoxy (39,6);	printf("%c%c%c:._",92,186,186);
gotoxy (44,7);	printf("%c%c:.",92,186);

gotoxy (31,6);	printf("%c_",92);
gotoxy (32,7);	printf("%c%c%c:._",92,186,186);
gotoxy (37,8);	printf("%c%c%c:._",92,186,186);

gotoxy (47,8);	printf("%c%c",92,92);
gotoxy (48,9);	printf("%c%c",92,92);
gotoxy (49,10);	printf("%c%c",92,92);


gotoxy (32,7);	printf("%c_",92);
gotoxy (33,8);	printf("%c%c%c:._",92,186,186);
gotoxy (38,9);	printf("%c%c%c:._",92,186,186);
gotoxy (44,10);	printf("%c%c:._",92,186);
gotoxy (47,11);	printf("%c%c%c%c%c",186,92,186,92,92);

gotoxy (30,9);	printf("%c_",92);
gotoxy (32,10);	printf("%c%c:._",186,186);
gotoxy (29,11);	printf("^-._%c%c%c%c%c%c:._",92,186,186,186,186,186);
gotoxy (34,12);	printf("^-._%c%c%c%c%c%c:::%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186,186,186,92);





gotoxy (26,13);	printf("%c%c%c%c^-._",92,186,186,186);
gotoxy (27,14);	printf("%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,124);
gotoxy (27,15);	printf("%c%c%c%c%c%c%c%c|",124,186,186,186,186,186,186,186);
gotoxy (28,16);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (28,17);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (29,18);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186);
gotoxy (29,19);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (30,20);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (30,21);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (31,22);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);

gotoxy (31,16);	printf("%c%c%c%c%c%c%c",186,186,186,186,186,186,92);
gotoxy (34,17);	printf("%c%c%c%c%c%c",186,186,186,186,186,92);
gotoxy (37,18);	printf("%c%c%c%c%c",186,186,186,186,92);
gotoxy (33,19);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (33,20);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (33,21);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (33,22);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (34,23);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (37,24);	printf("%c%c%c%c%c",92,186,186,186,124);
gotoxy (40,25);	printf("%c%c",92,124);


color_txt (0,7);
gotoxy (51,16);	printf("/|");
gotoxy (49,17);	printf("/%c%c|",186,186);
gotoxy (47,18);	printf("/%c%c%c%c|",186,186,186,186);
gotoxy (45,19);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (45,20);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (45,21);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (45,22);	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (45,23);	printf("%c%c%c%c%c%c%c/",124,186,186,186,186,186,186);
gotoxy (45,24);	printf("%c%c%c%c%c%c/",124,186,186,186,186,186);
gotoxy (45,25);	printf("%c%c%c%c%c/",124,186,186,186,186);
gotoxy (46,26);	printf("%c%c%c/",92,186,186);
gotoxy (47,27);	printf("%c/",92);

gotoxy (65,16);	printf("|%c",92);
gotoxy (65,17);	printf("|%c%c%c",186,186,92);
gotoxy (65,18);	printf("|%c%c%c%c%c",186,186,186,186,92);
gotoxy (65,19);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (65,20);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (65,21);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (53,22);	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (65,23);	printf("%c%c%c%c%c%c%c|",92,186,186,186,186,186,186);
gotoxy (66,24);	printf("%c%c%c%c%c%c|",92,186,186,186,186,186);
gotoxy (67,25);	printf("%c%c%c%c%c|",92,186,186,186,186);
gotoxy (68,26);	printf("%c%c%c/",92,186,186);
gotoxy (69,27);	printf("%c/",92);



gotoxy (54,8);	printf("%c%c      %c/",92,186,186);
gotoxy (54,9);	printf("|%c%c    %c%c|",186,186,186,186);
gotoxy (55,10);	printf("%c%c%c  /%c/",92,186,92,186);
gotoxy (56,11);	printf("|%c  %c|",186,186);
gotoxy (57,12);	printf("%c%c//",92,92);
gotoxy (57,13);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,14);	printf("%c%c%c%c",186,186,186,186);



gotoxy (57,15);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,16);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,17);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,18);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,19);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,20);	printf("%c%c%c%c",186,186,186,186);


gotoxy (54,25);	printf("/%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,92);
gotoxy (53,26);	printf("/%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,92);
gotoxy (52,27);	printf("/%c%c%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,186,186,92);

gotoxy (42,0);	printf("_.-^%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c^-._",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (37,1);	printf("_.-^%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c^-._",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (36,2);	printf("|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (37,3);  printf("^-._%c%c%c%c^-._",186,186,186,186);
gotoxy (41,4);  printf("^-._%c%c%c%c^-._",186,186,186,186);
gotoxy (45,5);  printf("^-._%c%c%c%c^-._",186,186,186,186);
gotoxy (49,6);  printf("^-._%c%c%c%c%c",186,186,186,186,92);
gotoxy (58,7);  printf("%c/",92);

gotoxy (68,3);  printf("_.-^%c%c%c%c_.-^",186,186,186,186);
gotoxy (64,4);  printf("_.-^%c%c%c%c_.-^",186,186,186,186);
gotoxy (61,5);  printf("_.-^%c%c%c%c_.-^",186,186,186,186);
gotoxy (60,6);  printf("/%c%c%c%c_.-^",186,186,186,186);

color_txt(0,3);

gotoxy (85,2);	printf("|%c%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186,186);
gotoxy (85,3);	printf("%c%c%c%c%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (85,4);	printf("|%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186);
gotoxy (88,5);	printf("/%c%c%c%c%c%c|",186,186,186,186,186,186);
gotoxy (86,6);	printf("%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186);
gotoxy (86,7);	printf("/%c%c%c%c%c%c|",186,186,186,186,186,186);
gotoxy (86,8);	printf("/%c%c%c%c%c/",186,186,186,186,186);
gotoxy (85,9);	printf("/%c%c%c%c%c%c|",186,186,186,186,186,186);
gotoxy (84,10);	printf("|%c%c%c%c%c%c/",186,186,186,186,186,186);
gotoxy (83,4);	printf("_/");
gotoxy (78,5);	printf("_.:%c%c/",186,186);
gotoxy (73,6);	printf("_.:%c%c/",186,186);
gotoxy (70,7);	printf(".:%c/",186);

gotoxy (85,6);	printf("_/");
gotoxy (80,7);	printf("_.:%c/",186);
gotoxy (75,8);	printf("_.:%c%c/",186,186);

gotoxy (69,8);	printf("//");
gotoxy (68,9);	printf("//");
gotoxy (67,10);	printf("//");


gotoxy (85,7);	printf(" /");
gotoxy (79,8);	printf("_.:%c%c/",186,186);
gotoxy (73,9);	printf("/_.:%c%c/",186,186);
gotoxy (69,10);	printf("_.:%c/",186);
gotoxy (66,11);	printf("//%c/%c",186,186);

gotoxy (84,9);	printf("_/");
gotoxy (80,10);	printf("_.:%c%c",186,186);
gotoxy (75,11);	printf("_.%c%c%c%c%c/:_.-^",186,186,186,186,186);
gotoxy (65,12);	printf("/%c%c%c%c%c:::%c%c%c%c%c/_.-^",186,186,186,186,186,186,186,186,186,186);


gotoxy (83,13);	printf("_.-^%c%c%c/",92,186,186,186);
gotoxy (81,14);	printf("%c%c%c%c%c%c%c%c/",124,186,186,186,186,186,186,186);
gotoxy (81,15);	printf("|%c%c%c%c%c%c%c|",186,186,186,186,186,186,186);
gotoxy (79,16);	printf("/%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186);
gotoxy (77,17);	printf("/%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,124);
gotoxy (75,18);	printf("/%c%c%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186,186,186);
gotoxy (75,19);	printf("|%c%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (75,20);	printf("|%c%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186,186,186);
gotoxy (75,21);	printf("|%c%c%c%c%c%c%c%c%c%c|",186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (75,22);	printf("|%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186);

gotoxy (75,23);	printf("%c%c%c%c%c%c%c/",124,186,186,186,186,186,186);
gotoxy (75,24);	printf("%c%c%c%c/",124,186,186,186);
gotoxy (75,25);	printf("|/");
}

void optimus4(){
	

	color_txt(0,8);
	gotoxy (21,2);	printf("%c%c%c%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (21,3);	printf("%c%c%c%c%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (22,4);	printf("%c%c%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186,186,124);
gotoxy (22,5);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (23,6);	printf("%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186);
gotoxy (23,7);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (24,8);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186);
gotoxy (24,9);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (25,10);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (33,4);	printf("%c_",92);
gotoxy (34,5);	printf("%c%c%c:._",92,186,186);
gotoxy (39,6);	printf("%c%c%c:._",92,186,186);
gotoxy (44,7);	printf("%c%c:.",92,186);

gotoxy (31,6);	printf("%c_",92);
gotoxy (32,7);	printf("%c%c%c:._",92,186,186);
gotoxy (37,8);	printf("%c%c%c:._",92,186,186);

gotoxy (47,8);	printf("%c%c",92,92);
gotoxy (48,9);	printf("%c%c",92,92);
gotoxy (49,10);	printf("%c%c",92,92);


gotoxy (32,7);	printf("%c_",92);
gotoxy (33,8);	printf("%c%c%c:._",92,186,186);
gotoxy (38,9);	printf("%c%c%c:._",92,186,186);
gotoxy (44,10);	printf("%c%c:._",92,186);
gotoxy (47,11);	printf("%c%c%c%c%c",186,92,186,92,92);

gotoxy (30,9);	printf("%c_",92);
gotoxy (32,10);	printf("%c%c:._",186,186);
gotoxy (29,11);	printf("^-._%c%c%c%c%c%c:._",92,186,186,186,186,186);
gotoxy (34,12);	printf("^-._%c%c%c%c%c%c:::%c%c%c%c%c%c",92,186,186,186,186,186,186,186,186,186,186,92);





gotoxy (26,13);	printf("%c%c%c%c^-._",92,186,186,186);
gotoxy (27,14);	printf("%c%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186,124);
gotoxy (27,15);	printf("%c%c%c%c%c%c%c%c|",124,186,186,186,186,186,186,186);
gotoxy (28,16);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (28,17);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (29,18);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,186);
gotoxy (29,19);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (30,20);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (30,21);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,92);
gotoxy (31,22);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);

gotoxy (31,16);	printf("%c%c%c%c%c%c%c",186,186,186,186,186,186,92);
gotoxy (34,17);	printf("%c%c%c%c%c%c",186,186,186,186,186,92);
gotoxy (37,18);	printf("%c%c%c%c%c",186,186,186,186,92);
gotoxy (33,19);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (33,20);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (33,21);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (33,22);	printf("%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,124);
gotoxy (34,23);	printf("%c%c%c%c%c%c%c%c",92,186,186,186,186,186,186,124);
gotoxy (37,24);	printf("%c%c%c%c%c",92,186,186,186,124);
gotoxy (40,25);	printf("%c%c",92,124);


color_txt (0,7);
gotoxy (51,16);	printf("/|");
gotoxy (49,17);	printf("/%c%c|",186,186);
gotoxy (47,18);	printf("/%c%c%c%c|",186,186,186,186);
gotoxy (45,19);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (45,20);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (45,21);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (45,22);	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (45,23);	printf("%c%c%c%c%c%c%c/",124,186,186,186,186,186,186);
gotoxy (45,24);	printf("%c%c%c%c%c%c/",124,186,186,186,186,186);
gotoxy (45,25);	printf("%c%c%c%c%c/",124,186,186,186,186);
gotoxy (46,26);	printf("%c%c%c/",92,186,186);
gotoxy (47,27);	printf("%c/",92);

gotoxy (65,16);	printf("|%c",92);
gotoxy (65,17);	printf("|%c%c%c",186,186,92);
gotoxy (65,18);	printf("|%c%c%c%c%c",186,186,186,186,92);
gotoxy (65,19);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (65,20);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (65,21);	printf("%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,124);
gotoxy (53,22);	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (65,23);	printf("%c%c%c%c%c%c%c|",92,186,186,186,186,186,186);
gotoxy (66,24);	printf("%c%c%c%c%c%c|",92,186,186,186,186,186);
gotoxy (67,25);	printf("%c%c%c%c%c|",92,186,186,186,186);
gotoxy (68,26);	printf("%c%c%c/",92,186,186);
gotoxy (69,27);	printf("%c/",92);



gotoxy (54,8);	printf("%c%c      %c/",92,186,186);
gotoxy (54,9);	printf("|%c%c    %c%c|",186,186,186,186);
gotoxy (55,10);	printf("%c%c%c  /%c/",92,186,92,186);
gotoxy (56,11);	printf("|%c  %c|",186,186);
gotoxy (57,12);	printf("%c%c//",92,92);
gotoxy (57,13);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,14);	printf("%c%c%c%c",186,186,186,186);



gotoxy (57,15);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,16);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,17);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,18);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,19);	printf("%c%c%c%c",186,186,186,186);
gotoxy (57,20);	printf("%c%c%c%c",186,186,186,186);


gotoxy (54,25);	printf("/%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,92);
gotoxy (53,26);	printf("/%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,92);
gotoxy (52,27);	printf("/%c%c%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,186,186,92);

gotoxy (42,0);	printf("_.-^%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c^-._",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (37,1);	printf("_.-^%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c^-._",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (36,2);	printf("|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|",186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (37,3);  printf("^-._%c%c%c%c^-._",186,186,186,186);
gotoxy (41,4);  printf("^-._%c%c%c%c^-._",186,186,186,186);
gotoxy (45,5);  printf("^-._%c%c%c%c^-._",186,186,186,186);
gotoxy (49,6);  printf("^-._%c%c%c%c%c",186,186,186,186,92);
gotoxy (58,7);  printf("%c/",92);

gotoxy (68,3);  printf("_.-^%c%c%c%c_.-^",186,186,186,186);
gotoxy (64,4);  printf("_.-^%c%c%c%c_.-^",186,186,186,186);
gotoxy (61,5);  printf("_.-^%c%c%c%c_.-^",186,186,186,186);
gotoxy (60,6);  printf("/%c%c%c%c_.-^",186,186,186,186);

color_txt(0,6);

gotoxy (85,2);	printf("|%c%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186,186);
gotoxy (85,3);	printf("%c%c%c%c%c%c%c%c%c%c%c%c",124,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (85,4);	printf("|%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186);
gotoxy (88,5);	printf("/%c%c%c%c%c%c|",186,186,186,186,186,186);
gotoxy (86,6);	printf("%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186);
gotoxy (86,7);	printf("/%c%c%c%c%c%c|",186,186,186,186,186,186);
gotoxy (86,8);	printf("/%c%c%c%c%c/",186,186,186,186,186);
gotoxy (85,9);	printf("/%c%c%c%c%c%c|",186,186,186,186,186,186);
gotoxy (84,10);	printf("|%c%c%c%c%c%c/",186,186,186,186,186,186);
gotoxy (83,4);	printf("_/");
gotoxy (78,5);	printf("_.:%c%c/",186,186);
gotoxy (73,6);	printf("_.:%c%c/",186,186);
gotoxy (70,7);	printf(".:%c/",186);

gotoxy (85,6);	printf("_/");
gotoxy (80,7);	printf("_.:%c/",186);
gotoxy (75,8);	printf("_.:%c%c/",186,186);

gotoxy (69,8);	printf("//");
gotoxy (68,9);	printf("//");
gotoxy (67,10);	printf("//");


gotoxy (85,7);	printf(" /");
gotoxy (79,8);	printf("_.:%c%c/",186,186);
gotoxy (73,9);	printf("/_.:%c%c/",186,186);
gotoxy (69,10);	printf("_.:%c/",186);
gotoxy (66,11);	printf("//%c/%c",186,186);

gotoxy (84,9);	printf("_/");
gotoxy (80,10);	printf("_.:%c%c",186,186);
gotoxy (75,11);	printf("_.%c%c%c%c%c/:_.-^",186,186,186,186,186);
gotoxy (65,12);	printf("/%c%c%c%c%c:::%c%c%c%c%c/_.-^",186,186,186,186,186,186,186,186,186,186);


gotoxy (83,13);	printf("_.-^%c%c%c/",92,186,186,186);
gotoxy (81,14);	printf("%c%c%c%c%c%c%c%c/",124,186,186,186,186,186,186,186);
gotoxy (81,15);	printf("|%c%c%c%c%c%c%c|",186,186,186,186,186,186,186);
gotoxy (79,16);	printf("/%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186);
gotoxy (77,17);	printf("/%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,124);
gotoxy (75,18);	printf("/%c%c%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186,186,186);
gotoxy (75,19);	printf("|%c%c%c%c%c%c%c%c%c%c%c%c",186,186,186,186,186,186,186,186,186,186,186,124);
gotoxy (75,20);	printf("|%c%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186,186,186);
gotoxy (75,21);	printf("|%c%c%c%c%c%c%c%c%c%c|",186,186,186,186,186,186,186,186,186,186,186,186);
gotoxy (75,22);	printf("|%c%c%c%c%c%c%c%c%c/",186,186,186,186,186,186,186,186,186);

gotoxy (75,23);	printf("%c%c%c%c%c%c%c/",124,186,186,186,186,186,186);
gotoxy (75,24);	printf("%c%c%c%c/",124,186,186,186);
gotoxy (75,25);	printf("|/");
}

void Menu2(){
	//CARRITO DE ENTRADA
	system("color 3");
	system("color 0");
	color_txt(0,4);
	//CUADRO GENERAL 
	//lineas verticales y horizontales del cuadro general
	for(int i=0;i<113;i=i+7){
	gotoxy (i,1); printf("%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205);
	gotoxy (i,29); printf("%c%c%c%c%c%c%c",205,205,205,205,205,205,205);
	}
	//ESQUINAS del cuadro general
	gotoxy (0,1); printf("%c",201);
	gotoxy (119,1); printf("%c",187);
	gotoxy (119,29); printf("%c",188);
	gotoxy (0,29); printf("%c",200);
	
	for(int j=2;j<=28;j=j+1){
	gotoxy (0,j); printf("%c",186);
	gotoxy (119,j); printf("%c",186);
	}
	
	
	color_txt(0,9);
	gotoxy (2,5);  printf("/####  /####  ######  /####%C  ######  ######  /####%C  ##  ##  /####%C  ##   ##  ######  /####  ##  ##  ######  /####%c",92,92,92,92);
	gotoxy (2,6);  printf("#####  #####  ######  ######  ######  ######  ######  ##%C ##  ######  ##%C /##  ######  #####  ##%C ##  ######  ######",92,92,92);
	gotoxy (2,7);  printf("##     ##       ##    ##  ##  ##        ##    ##  ##  ### ##  ##  ##  ### ###    ##    ##     ### ##    ##    ##  ##");
	gotoxy (2,8);  printf("%C##%C%C   ##      ##    ######  ##        ##    ##  ##  ###%C##  ######  ## # ##    ##    %C##%C%C  ###%C##    ##    ##  ##",92,92,92,92,92,92,92,92);
	gotoxy (2,9);  printf("###//    ##     ##    ######  ##        ##    ##  ##  ##%C###  ######  ## V ##    ##    ###//  ##%C###    ##    ##  ##",92,92);
	gotoxy (2,10); printf("/##       ##    ##    ##  ##  ##        ##    ##  ##  ## ###  ##  ##  ##   ##    ##    /##    ## ###    ##    ##  ##");
	gotoxy (2,11); printf("#####  #####    ##    ##  ##  ######  ######  ######  ## %C##  ##  ##  ##   ##  ######  #####  ## %C##    ##    ######",92,92);
	gotoxy (2,12); printf("%C####  ####/    ##    ##  ##  ######  ######  %C####/  ##  ##  ##  ##  ##   ##  ######  %C####  ##  ##    ##    %c####/",92,92,92,92);
	

	color_txt(0,6);
	gotoxy (50,15);  printf(" ESTACIONAMIENTO ");
	color_txt(0,4);
	gotoxy (50,18);  printf("REGISTRAR INGRESO");
	gotoxy (50,21);  printf("REGISTRAR SALIDA ");
	gotoxy (50,24);  printf("SALIR DEL SISTEMA");
	
	
	carroestatico();
		
	
	char tecla;
	int opcion=1;
	color_txt(11,0);

	while(opcion!='z'){
	tecla=getch();
	if(tecla==80 && opcion==1) opcion=2;
	else if (tecla==72 && opcion==2) opcion=1;
	else if (tecla==80 && opcion==2) opcion=3;
	else if (tecla==72 && opcion==3) opcion=2;	
	else if (tecla==80 && opcion==3) opcion=4;
	else if (tecla==72 && opcion==4) opcion=3;	
	else if (tecla==80 && opcion==4) opcion=1;
	else if (tecla==72 && opcion==1) opcion=4;
	else if (opcion==1 && tecla==13) opcion=5;
	else if (opcion==2 && tecla==13) opcion=6;
	else if (opcion==3 && tecla==13) opcion=7;
	else if (opcion==4 && tecla==13) opcion=8;
	
	switch(opcion)
		{
		case 1: color_txt(0,6);
	gotoxy (50,15);  printf(" ESTACIONAMIENTO ");
	color_txt(0,4);
	gotoxy (50,18);  printf("REGISTRAR INGRESO");
	gotoxy (50,21);  printf("REGISTRAR SALIDA ");
	gotoxy (50,24);  printf("SALIR DEL SISTEMA");
	break;
	
	
		case 2: color_txt(0,4);
	gotoxy (50,15);  printf(" ESTACIONAMIENTO ");
	color_txt(0,6);
	gotoxy (50,18);  printf("REGISTRAR INGRESO");
	color_txt(0,4);
	gotoxy (50,21);  printf("REGISTRAR SALIDA ");
	gotoxy (50,24);  printf("SALIR DEL SISTEMA");
		break;
		
		
		case 3: color_txt(0,4);
	gotoxy (50,15);  printf(" ESTACIONAMIENTO ");
	gotoxy (50,18);  printf("REGISTRAR INGRESO");
	color_txt(0,6);
	gotoxy (50,21);  printf("REGISTRAR SALIDA ");
	color_txt(0,4);
	gotoxy (50,24);  printf("SALIR DEL SISTEMA");
		break;
		
		case 4: color_txt(0,4);
	gotoxy (50,15);  printf(" ESTACIONAMIENTO ");
	gotoxy (50,18);  printf("REGISTRAR INGRESO");
	gotoxy (50,21);  printf("REGISTRAR SALIDA ");
	color_txt(0,6);
	gotoxy (50,24);  printf("SALIR DEL SISTEMA");
	color_txt(0,4);
		break;
		
		case 5:
		system("cls");
		ocultarc();
		tablacarros2();
		getch();
		system("cls");
		Menu2();
		break;
		
		case 6:
		system("cls");
		ocultarc();
		ingreso(Esc);
		gotoxy(5,24);cout<<"----------------------------------";
		gotoxy(5,25);cout<<"Ingreso registrado correctamente!.";
		gotoxy(5,26);cout<<"----------------------------------";
		getch();
		system("cls");
		Menu2();
		break;
		
		case 7:
		system("cls");
		ocultarc();
		elimina(Lec);
		system("cls");
		Menu2();
		break;
		case 8:
		carrosalida();
		system("cls");
		prime();
		exit(-1);
		opcion='z';	
		break;
		}
	}
}

void registrosvacios(){
	color_txt(0,14);
	gotoxy(58,3);cout<<"A1:";
	gotoxy(58,4);cout<<"A2:";
	gotoxy(58,5);cout<<"A3:";
	gotoxy(58,6);cout<<"A4:";
	gotoxy(58,7);cout<<"A5:";
	gotoxy(58,8);cout<<"A6:";
	gotoxy(58,9);cout<<"A7:";
	gotoxy(58,10);cout<<"A8.1:";
	gotoxy(58,11);cout<<"A8.2:";
	gotoxy(58,12);cout<<"B1:";
	gotoxy(58,13);cout<<"B2:";
	gotoxy(58,14);cout<<"C1:";
	gotoxy(58,15);cout<<"C2:";
	gotoxy(58,16);cout<<"D1:";
	gotoxy(58,17);cout<<"D2:";
	gotoxy(58,18);cout<<"E1:";
	gotoxy(58,19);cout<<"E2:";
	gotoxy(58,20);cout<<"E3:";
	gotoxy(58,21);cout<<"E4:";
	gotoxy(58,22);cout<<"E5:";
	gotoxy(58,23);cout<<"E6:";
	gotoxy(58,24);cout<<"F1:";
	
	gotoxy(89,3);cout<<"F2:";
	gotoxy(89,4);cout<<"F3:";
	gotoxy(89,5);cout<<"F4:";
	gotoxy(89,6);cout<<"F5:";
	gotoxy(89,7);cout<<"F6:";
	gotoxy(89,8);cout<<"G1:";
	gotoxy(89,9);cout<<"G2:";
	gotoxy(89,10);cout<<"H1:";
	gotoxy(89,11);cout<<"H2:";
	gotoxy(89,12);cout<<"I1:";
	gotoxy(89,13);cout<<"I2:";
	gotoxy(89,14);cout<<"J1:";
	gotoxy(89,15);cout<<"J2:";
	gotoxy(89,16);cout<<"J3:";
	gotoxy(89,17);cout<<"J4:";
	gotoxy(89,18);cout<<"J5:";
	gotoxy(89,19);cout<<"J6:";
	gotoxy(89,20);cout<<"J7:";
	gotoxy(89,21);cout<<"J8:";
	gotoxy(89,22);cout<<"J9:";
	gotoxy(89,23);cout<<"J10:";
	
}

void nada(){
	gotoxy (5,5); printf("  ");
		gotoxy (10,5); printf("  ");
		gotoxy (14,5); printf("  ");
		gotoxy (18,5); printf("  ");
		gotoxy (22,5); printf("  ");
		gotoxy (26,5); printf("  ");
		gotoxy (30,5); printf("  ");
		gotoxy (43,4); printf("    ");
		gotoxy (43,6); printf("    ");
		
		//nombre B
		gotoxy (5,8); printf("  ");
		gotoxy (44,8); printf("  ");

		//nombre C
		gotoxy (5,10); printf("  ");
		gotoxy (44,10); printf("  ");

		//nombre D
		gotoxy (5,12); printf("  ");
		gotoxy (44,12); printf("  ");

		//nombre E
		gotoxy (5,14); printf("  ");
		gotoxy (18,14); printf("  ");
		gotoxy (22,14); printf("  ");
		gotoxy (26,14); printf("  ");
		gotoxy (30,14); printf("  ");
		gotoxy (44,14); printf("  ");

		//nombre F
		gotoxy (5,16); printf("  ");
		gotoxy (18,16); printf("  ");
		gotoxy (22,16); printf("  ");
		gotoxy (26,16); printf("  ");
		gotoxy (30,16); printf("  ");
		gotoxy (44,16); printf("  ");

		//nombre G
		gotoxy (5,18); printf("  ");
		gotoxy (44,18); printf("  ");

		//nombre H
		gotoxy (5,20); printf("  ");
		gotoxy (44,20); printf("  ");

		//nombre I
		gotoxy (5,22); printf("  ");
		gotoxy (44,22); printf("  ");

		//nombre J
		gotoxy (5,25); printf("  ");
		gotoxy (10,25); printf("  ");
		gotoxy (14,25); printf("  ");
		gotoxy (18,25); printf("  ");
		gotoxy (22,25); printf("  ");
		gotoxy (26,25); printf("  ");
		gotoxy (30,25); printf("  ");
		gotoxy (34,25); printf("  ");
		gotoxy (38,25); printf("  ");
		gotoxy (43,25); printf("   ");
		
		
}


