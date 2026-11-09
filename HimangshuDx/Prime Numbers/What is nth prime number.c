//find the nth prime number. 

#include<stdio.h>

int prime(int n)
{
    int i, f = 0;
    if(n < 2)
        return 0;
        
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            f++;
    }

    if(f == 2)
        return 1;
    else
        return 0;
}

int main()
{
    int n, i = 2, count = 0;

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("\nInvalid input. Enter a positive integer.");
        return 0;
    }

    while(count < n)
    {
        if(prime(i))
        {
            count++;
        }

        if(count < n)
            i++;
    }

    printf("\nThe %dth prime number is: %d", n, i);

    return 0;
}
