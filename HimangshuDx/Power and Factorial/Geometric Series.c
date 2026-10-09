//sum of 1 + x + x² + x³ + ... + xⁿ.

#include<stdio.h>
#include<math.h>

int main()
{
    int n,x,i, sum=1;
    printf("\n We are going to print the pattern of 1 + x + x^2 + x^3 + ... + x^n.");

    printf("\nEnter the Value of X:");
    scanf("%d",&x);

    printf("\nEnter the value of N:");
    scanf("%d", &n);

    for(i=1; i<=n;i++)
        sum = sum + (pow(x,i));
    
    printf("\nThe sum of 1 + x + x^2 + x^3 + ... + x^n is: %d",sum);
    
    return 0;
}
