#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char split (double,int*,double*);
int main (void)
{
	double n,f;
	int w;
	char s;
	printf("Please enter a double number\n");
	scanf("%lf", &n);
	s=split(n,&w,&f);
	printf("The sign is %c\n", s);
	printf("The whole part is %d\n", w);
	printf("The fraction part is %lf", f);
	return(0);
}
	char split(double number, int*whole, double*fraction)
	{
		char sign;
		if(number<0)
			sign='-';
		else if(number>0)
			sign='+';
		else
			sign=' ';
		*whole=abs((int)number);
		*fraction=fabs(number)-*whole;
		return(sign);
	}

