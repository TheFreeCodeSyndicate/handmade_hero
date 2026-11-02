//calculate nPr using factorial          nPr= n!/(n-r)!
//calculate nCr using factorial          nCr= n!/{r!(n-r)!}

#include<stdio.h>

int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n;i++)
        fact=fact*i;
    return fact;
} 

int main()
{
    int n,r;

    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    printf("\nEnter the value of r: ");
    scanf("%d",&r);
 
    printf("\nThe value of %dP%d is: %d",n,r,factorial(n)/factorial(n-r));        
    printf("\nThe Value of %dC%d is: %d", n,r,factorial(n)/(factorial(r)*factorial(n-r)));

    return 0;
}
