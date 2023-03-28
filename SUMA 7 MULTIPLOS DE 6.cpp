#include <stdio.h>
#include <conio.h>
main()
{
	int num=0,sum=0;
	for (int cont =0;cont<7;cont++)
	{
		num = num + 6;
		sum = num + sum;
	}
	printf("%d",sum);
}
