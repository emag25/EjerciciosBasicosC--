#include <conio.h>
#include <stdio.h>
#include <stdbool.h>
main()
{
	bool p,q,r;
	
	printf("\n TABLA DE VERDAD BICONDICIONAL");
	
	p=true; q=true;
	r = ((!p || q) && (!q || p));
	printf("\n\n\t %d <-> %d = %d", p,q,r);
	
	p=true; q=false;
	r = ((!p || q) && (!q || p));
	printf("\n\t %d <-> %d = %d", p,q,r);
	
	p=false; q=true;
	r = ((!p || q) && (!q || p));
	printf("\n\t %d <-> %d = %d", p,q,r);
	
	p=false; q=false;
	r = ((!p || q) && (!q || p));
	printf("\n\t %d <-> %d = %d", p,q,r);
	
	getch();
	return 0;
}

