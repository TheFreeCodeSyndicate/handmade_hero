//Least Common Multiple(LCM) of two numner.  --Method 2

#include<stdio.h>

int HCF(int a, int b)
{
    int i, hcf;
    for(i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    return hcf;
}

int LCM(int a, int b)
{
    int lcm;

    lcm= (a*b)/HCF(a,b);

    printf("\nThe LCM of %d and %d is: %d", a,b,lcm);

    return 1;
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

    LCM(a,b);

    return 0;
} 