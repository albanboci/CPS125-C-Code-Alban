#include <stdio.h>
#include <stdlib.h>

int max_of_3(int x,int y,int z);
int min_of_3(int x,int y,int z);

int main (void)
{
	int a, b,c,larger,largest,smaller,smallest,middle;
	printf("Please enter three numbers\n");
	printf("First: ");
	scanf("%d",&a);
	printf("Second: ");
	scanf("%d",&b);
	printf("Third: ");
	scanf("%d",&c);
	
	if(a>b)
	{
		larger=a;
		smaller=b;
	}
	else if(b>a)
	{
		larger=b;
		smaller=a;
	}
	
	largest = max_of_3(a,b,c);
		
	smallest = min_of_3(a,b,c);
	
	printf("The largest number out of the three is %d.\n", largest);
	printf("The smallest number out of the three is %d.\n",smallest);
	
	middle=a+b+c-largest-smallest;
	printf("The middle value is %d.\n",middle);
	printf("The three numbers in ascending order are %d, %d, %d.",smallest,middle,largest);
	return(0);
}


int max_of_3(int x,int y,int z)
{
	int largest;

	if(x>y&&x>z)
		largest=x;
	else if(y>x&&y>z)
		largest=y;
	else
		largest=z;
	
	return(largest);
}

int min_of_3(int x,int y,int z)
{
	int smallest;
	
	if(x<y&&x<z)
		smallest=x;
	else if(y<x&&y<z)
		smallest=y;
	else
		smallest=z;
	
	return(smallest);
}

