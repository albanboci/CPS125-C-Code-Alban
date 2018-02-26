#include <stdio.h>
int main(void)
{
    int i, n1=0, n2=1, next;

    for (i=0;i<17;i++)
    {
        printf("%d ", n1);
        next=n1+n2;
        n1=n2;
        n2=next;
    }
    return (0);
}

