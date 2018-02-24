#include <stdio.h>
#include <math.h>
int main (void)
{
	int a1, a2, t1, t2;
	double sum, avg;
	char grade;
	printf ("Enter the mark for Assignment 1: ");
	scanf ("%d", &a1);
	printf ("Enter the mark for Assignment 2: ");
	scanf ("%d", &a2);
	printf ("Enter the mark for Test 1: ");
	scanf ("%d", &t1);
	printf ("Enter the mark for Test 2: ");
	scanf ("%d", &t2);

	sum=a1+a2+t1+t2;
	avg=sum/4;
	printf("The average is: %lf\n", avg);
	if (t1<50||t2<50)
		{
			grade='F';
			printf ("The grade is %c\n", grade);
		}
	else if (avg>=80)
		{
			grade='A';
			if(a1<50||a2<50)
				grade='B';
			printf ("The grade is %c\n", grade);
		}
	else if (avg>=70)
		{
			grade='B';
			if(a1<50||a2<50)
				grade='C';
			printf ("The grade is %c\n", grade);
		}
	else if (avg>=60)
		{
			grade='C';
			if(a1<50||a2<50)
				grade='D';
			printf ("The grade is %c\n", grade);
		}
	else if (avg>=50)
		{
			grade='D';
			if(a1<50||a2<50)
				grade='F';
			printf ("The grade is %c\n", grade);
		}
	else if (avg<50)
		{
			grade='F';
			printf ("The grade is %c\n", grade);
		}
	
	return (0);
}

