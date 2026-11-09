//Digital Root of a number.

#include<stdio.h>

int root(int n)
{
    int last,sum;
    while(n>=10)
    {
        sum=0;
        while(n>0)
        {
            last=n%10;
            sum+=last;
            n/=10;
        }
        sum=n;
    }
    return n;
}

int main()
{
    int n,r;
    printf("\nEnter a Number: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("\nERROR: Negative Numbers are not allowed.\n");
        return 0;
    }

    r=root(n);
    printf("\nThe Digital Root of %d is: %d",n,r);

    return 0;
}