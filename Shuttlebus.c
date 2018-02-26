#include <stdio.h>
#include <math.h>
int main (void)
{
	int ppl;
	double bus, extra;
	
	printf("Enter how many people will be taking a shuttlebus:\n");
	scanf("%d", &ppl);

	bus=(double)ppl/16;
	
	if(floor(bus)==bus)
	{
		printf("\n%.0lf shuttlebuses are needed\nThere are no extra people.", bus);
	}
	
	else
	{
		bus=ceil(bus);
		printf("\n%.0lf busses are needed\n", bus);
		extra=(ppl-(floor(bus)*16)+16);
		printf("There are %.0lf out of 16 people in the last bus", extra);
	}

	return(0);
}

