//The Highest Common Factor(HCF) or Greatest Common Divisor(GCD) of Three numbers.

#include<stdio.h>

int HCF(int a, int b, int c)
{
    int i, hcf;
    for(i=1; i<=a && i<=b && i<=c; i++)
    {
        if(a%i==0 && b%i==0 && c%i==0)
            hcf=i;
    }
    printf("\nThe HCF of %d, %d and %d is: %d",a,b,c,hcf);

    return 0;
}

int main()
{
    int a,b,c;
    printf("\nEnter Three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a<=0 || b<=0 || c<=0)
    {   printf("\nPlease enter Three Positive Numbers.");
        return 0;
    }

    HCF(a,b,c);

    return 0;
}