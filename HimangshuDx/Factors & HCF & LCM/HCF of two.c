//The Highest Common Factor(HCF) or Greatest Common Divisor(GCD) of two numbers.

#include<stdio.h>

int HCF(int a, int b)
{
    int i, hcf;
    for(i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    printf("\nThe HCF of %d and %d is: %d",a,b,hcf);

    return 0;
}

int main()
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a,&b);
    if(a<=0 || b<=0)
    {   printf("\nPlease enter two Positive Numbers.");
        return 0;
    }

    HCF(a,b);

    return 0;
}