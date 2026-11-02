// Factorial of a number 
//sum of factorials from 1! to n!
//factorial using while loop 

#include<stdio.h>

int factorial(int n)
{
    int i, fact=1;
    for (i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}

int sum_factorial(int n)
{
    int i, fact=1, sum=0;
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
        sum= sum+fact;
    }
    return sum;
}

int factorial_while(int n)
{
    int i=1, fact=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}

int main()
{
    int n;

    printf("\nEnter the number to find the factorial: ");
    scanf("%d",&n);

    printf("\nThe factorial of %d is: %d", n, factorial(n));
    printf("\nThe sum of the factorials from 1! to %d! is: %d", n, sum_factorial(n));
    printf("\nThe factorial of %d using while loop is: %d", n, factorial_while(n));

    return 0;
}
