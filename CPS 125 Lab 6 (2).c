#include <stdio.h>
void f3(int y, int *d, int *r);
int main(void)
{
	int x,division,remainder;

	printf("Please enter a number between 10 and 99: ");
	scanf("%d", &x);

	while(x<10||x>99)
	{
		printf("\nINVALID!\n\nPlease enter another number: ");
		scanf("%d", &x);
	}	 

	division=x/10;
	
	remainder=x%10;
	
	f3(x, &division, &remainder);
		   
	printf("\nDividing that number by 10 gives: %d\n", division); 
	printf("The remainder of the division by 10 is: %d\n", remainder);
	
	
	
	return(0);
}

void f3(int y, int *d, int *r)
{
	*d=y/10;
	*r=y%10;
}

