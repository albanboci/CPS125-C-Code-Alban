#include <stdio.h>
#include <math.h>
int main (void)
{
	int n1 = 0, n2 = 1, next, count = 0;
	double r;
	printf ("The Fibonachi Sequence between 0 and 1000000 is:");
	while (n1 < 1000000)
	{
		printf ("\n%d", n1);
		count++;
		next = n1 + n2;
		n1 = n2;
		n2 = next;
	}
	printf("\n\nThe number of terms in the sequence is: %d\n", count);
	
	
	n1 = 0, n2 = 1, next = 0, count = 0; /*n1 and n2 are restated as original value because once the first loop finishes, they are the value over 1000000*/
	while (n1 < 1000000)
	{
		if (floor(sqrt(n1)) == sqrt(n1)) /*floor is used because the condition fails if the square root of once of the numbers has decimals*/
		{
			printf ("\n%d", n1);
			count++;
		}
		next = n1 + n2;
		n1 = n2;
		n2 = next;
	}
	printf("\n\nThe number of terms that satisfy the conditions is: %d", count);
	
	
	n1 = 1, n2 = 1, next = 0, count = 0;
	while (n1 < 1000000)
	{
		r = (double)n2 / n1;
		printf ("\n%.4lf", r);
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		count++;
	}
	printf ("\n\nThe Golden Number is: %.3lf", r);
	
	
	n1 = 0, n2 = 1, next = 0, count = 1;
	while (n1 < 1000000)
	{
		if (count == 21)
		{
			printf ("\n\nThe 21st term of the sequence is: %d", n1);
		}
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		count++;
	}
	return(0);
}


