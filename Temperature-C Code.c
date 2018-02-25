#include <stdio.h>
int main (void)
{
	int temp;
	printf("The temperature(C) today is:\n");
	scanf("%d", &temp);
	
	if(temp<=0)
	{
		printf("\nDamn, it's cold af outside!\n");
	}
	else if(temp<=10)
	{
		printf("\nThe temperature is pretty decent today.");
	}
	else if(temp<=30)
	{
		printf("\nThe temperature is perfect!");
	}
	else if(temp<=100)
	{
		printf("\nThats quite uncomfortable...");
	}
	else if(temp>=100)
	{
		printf("\nHow have you not boiled alive yet?");
	}
	return(0);
}

