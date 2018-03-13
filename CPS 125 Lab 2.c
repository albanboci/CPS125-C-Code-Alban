#include <stdio.h>

int main (void)
{
	/* part 1 */
	int a, b, f, big, small;
	double c, d, input, pi=3.14159, circumference, root;
	a=3; b=4; f=4;
	d = a + b;
	
	printf ("The value of d is %lf\n", d);
	
	/* part 2 */
	printf ("Input any real number:\n");
	scanf ("%lf",&input);
	printf ("The number to the nearest thousandth is %5.3lf\n",input);
	printf ("The number to the nearest hundredth is %5.2lf\n",input);

	/* part 3 */
	printf ("Enter the value of the small radius:\n");
	scanf ("%d",&small);
	printf ("Enter the value of the large radius:\n");
	scanf ("%d",&big);

	root=(((small*small)+(big*big))/2);
	circumference=2*pi*sqrt(root);
	printf ("The circumference of the ellipse is: %lf\n", circumference);
	return (0);
}

