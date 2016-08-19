//HAVILGIT
//ERAY ALPARSLAN // ruroot
//This C program runs only on x86 Operating Systems
#include <stdio.h>

void manipule()
{
	int a;

	*(&a+2) -= 34 ;
}

void main(void)
{
	int x;
	x = 0;
	printf ("Selam %d\n",x);
	x++;
	if (x!=10)
		manipule();	
	printf ("x = %d",x);
}

