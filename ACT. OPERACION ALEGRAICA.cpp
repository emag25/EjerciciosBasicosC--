#include <conio.h>
#include <stdio.h>
#include <math.h>
main()
{
	int w = 3, x = 1, y = 5, z = 2, m;
	
	printf("\n   m = ((w ^ 2) - (x ^ 2)) / (2 (y - z))");
	m = w^2 - x^2 / 2 * (y - z);
	
	printf("\n\n\t       m = %.2f",(float)m);
	
	getch();
	return 0;
}

