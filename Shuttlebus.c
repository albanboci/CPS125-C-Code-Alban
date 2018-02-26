#include <stdio.h>
#include <math.h>
int main (void)
{
	int ppl;
	double bus, extra;
	
	do
	{
	printf("Enter how many people will be taking a shuttlebus:\n");
	scanf("%d", &ppl);
	}
	while(ppl<0);
		
	bus=(double)ppl/16;
	
	bus=ceil(bus);
	printf("\n%.0lf busses are needed\n", bus);
	extra=((ceil(bus)*16)-ppl);
	printf("There are %.0lf empty seats on the last bus", extra);
	
	return(0);
}

