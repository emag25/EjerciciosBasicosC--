#include<stdio.h>
#include<conio.h>
main()
{
	int dia, mes, anio, ndia=0;
	printf("\n * INGRESE LA FECHA EN NUMEROS *");	
	printf("\n\n ANIO: ");
	scanf("%d",&anio);
	printf("\n MES: ");
	scanf("%d",&mes);

	if (mes >= 1 && mes <= 12)
	{
		printf("\n DIA: ");
		scanf("%d",&dia);
		
		if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0)
		{
			switch (mes)
			{
				case 1:
					if (dia >= 1 && dia <= 31){
						ndia = ndia + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }
				break;
				case 2:
					if ( dia >= 1 && dia <= 29 ){
						ndia = 31 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 3:
					if (dia >= 1 && dia <= 31){
						ndia = 60 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 4:
					if (dia >= 1 && dia <= 30){
						ndia = 91 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;	
				case 5:
					if (dia >= 1 && dia <= 31){
						ndia = 121 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;	
				case 6:
					if (dia >= 1 && dia <= 30){
						ndia = 152 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;	
				case 7:
					if (dia >= 1 && dia <= 31){
						ndia = 182 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 8:
					if (dia >= 1 && dia <= 31){
						ndia = 213 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 9:
					if (dia >= 1 && dia <= 30){
						ndia = 244 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 10:
					if (dia >= 1 && dia <= 31){
						ndia = 274 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 11:
					if (dia >= 1 && dia <= 30){
						ndia = 305 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 12:
					if (dia >= 1 && dia <= 31){
						ndia = 335 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
			}
		}
		else
		{
			switch (mes)
			{
				case 1:
					if (dia >= 1 && dia <= 31){
						ndia = ndia + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }
				break;
				case 2:
					if ( dia >= 1 && dia <= 28 ){
						ndia = 31 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 3:
					if (dia >= 1 && dia <= 31){
						ndia = 59 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 4:
					if (dia >= 1 && dia <= 30){
						ndia = 90 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;	
				case 5:
					if (dia >= 1 && dia <= 31){
						ndia = 120 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;	
				case 6:
					if (dia >= 1 && dia <= 30){
						ndia = 151 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;	
				case 7:
					if (dia >= 1 && dia <= 31){
						ndia = 181 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 8:
					if (dia >= 1 && dia <= 31){
						ndia = 212 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 9:
					if (dia >= 1 && dia <= 30){
						ndia = 243 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 10:
					if (dia >= 1 && dia <= 31){
						ndia = 273 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 11:
					if (dia >= 1 && dia <= 30){
						ndia = 304 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
				case 12:
					if (dia >= 1 && dia <= 31){
						ndia = 334 + dia;
						printf("\n   * ES EL DIA %d DEL ANIO *",ndia); }
					else {
						printf("\n  ** DIA INCORRECTO  **"); }	
				break;
			}
		}
	}
	else {
		printf("\n ** NUMERO DE MES INCORRECTO **"); }
	getch();
	return 0;
}

