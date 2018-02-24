#include <stdio.h>
int main (void)
{
	int r;
	double A, pi=3.14159;
	
	printf ("Please enter the radius of a circle:\n");
	scanf ("%d", &r);
	printf ("\nArea = pi * r * r\n\n");
	
	A=pi*r*r;

	printf ("The area of the circle is: %.2lf", A);
	
	return(0);
}
 

