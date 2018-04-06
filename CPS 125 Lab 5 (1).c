#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i, num, b_num, num_samples, num_orgs_per_100;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter number %d: ", i);
		scanf("%d", &num);
		printf("The number chosen is %d\n\n", num);
	}

	printf("Enter the beach number, number of samples, and number of organisms per 100ml of water, respectively:\n");
	scanf("%d%d%d", &b_num, &num_samples, &num_orgs_per_100);
	printf("There are %d samples\n", num_samples);
	
	for(i=1;i<=num_samples;i++)
	{
		printf("Enter the value of sample %d: ", i);
		scanf("%d", &num_orgs_per_100);
		printf("The value is %d\n", num_orgs_per_100);
	}
	
	return(0);
}

