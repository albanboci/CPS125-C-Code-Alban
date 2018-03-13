#include <stdio.h>
#include <math.h>
int main (void)
{
	int num1, num2, num3, num4;
	double sum, sum2, sum3, quo;
	printf ("Input any four numbers of your choice: \n");
	scanf ("%d %d %d %d", &num1, &num2, &num3, &num4);

	sum=num1+num2+num3+num4;
	printf ("The sum of the four numbers is: %lf\n", sum); 
	
	sum2=(num1+num2)-(num3+num4);
	printf ("The sum of the first two minus the some of the other two is: %lf\n", sum2);
	
	sum3=((num1*num1)+(num2*num2)+(num3*num3)+(num4*num4));
	printf ("The sum of the squares of the four numbers is: %lf\n", sum3);
	
	quo=sqrt(sum3)/sum;
	printf ("The quotient is: %lf\n", quo);
	return(0);
}

