#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

struct empleado 
{
	int horasMens;
	float salario;
} emp[10], *p;

void calcula_salario()
{
	float sala, comi;
	p = emp;
	for(int i=0;i<10;i++)
	{
		system("cls");
		cout<<"\n HORAS TRABAJADAS EN EL MES: "; cin>>p->horasMens;
		
		sala=((400.0/192.0)*p->horasMens);
		
		if (p->horasMens > 192) 
		{
			comi=(sala*0.2);
			p->salario = sala+comi;
			cout<<"\n\n FELICIDADES! HA RECIBIDO COMISION";
			cout<<"\n AHORA SU SALARIO ES: "<<p->salario;
		}
		else 
		{
			p->salario = sala;
			cout<<"\n\n SU SALARIO ES: "<<p->salario<<endl;
			if (p->horasMens < 192)
				cout<<"\n USTED NO TIENE VISTO BUENO";	
		}
		getch();
		p++;
	}
}

main()
{
	calcula_salario();
	getch();
	return 0;
}



