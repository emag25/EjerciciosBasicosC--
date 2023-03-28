#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<string.h>
using namespace std;
void gotoxy(int X, int Y){
	HANDLE hCon; 
	COORD dwPos;
	
	dwPos.X = X;
	dwPos.Y = Y;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon,dwPos);
}

void Menu();
void color_txt(int colorf, int colort);
void ocultarc();

int main(){
	
	ocultarc();
	Menu();
	return 0;
	
}

void color_txt(int colorf, int colort)
{

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorf*16+colort); 
}

void ocultarc(){
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void Menu(){
system("color 7");
color_txt(4,0);
for(int i=19; i<80; i++){
	gotoxy (i,14);	printf("%c",219);
}



getch();
}
