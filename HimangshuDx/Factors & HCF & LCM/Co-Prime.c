//check whether two numbers are co-prime.
//CO-PRIME: enekua duta number jar HCF(GCD) exactly 1 hoy..

#include<stdio.h>

int HCF(int a, int b)
{
    int i, hcf=1;
    for(i=1; i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }

    if(hcf==1)
        printf("\n%d and %d are Co-Prime Numbers.",a,b);
    else 
        printf("\n%d and %d are Not Co-Prime Numbers.",a,b);

    return 1;
}

int main()
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a,&b);
    if(a<=0 && b<=0)
    {
        printf("\nENter Two Positive numbers.");
        return 0;
    }

    HCF(a,b);

    return 0;
}