//prime numbers between two given numbers.

#include<stdio.h>

int prime(int n)
{
    int i;
    if(n < 2)
        return 0;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int a, n, i, count = 0;

    printf("\nEnter the first number of the range: ");
    scanf("%d", &a);

    printf("\nEnter the last number of the range: ");
    scanf("%d", &n);

    if(a < 1 || n < 1)
    {
        printf("\nERROR: Enter positive numbers.");
        return 0;
    }
    if(a > n)
    {
        printf("\nERROR: First number must be less than or equal to last number.");
        return 0;
    }
    printf("\nAll Prime Numbers between %d and %d are: ", a, n);

    for(i = a; i <= n; i++)
    {
        if(prime(i))
        {
            printf("%d, ", i);
            count++;
        }
    }
    if(count == 0)
        printf("No prime numbers found.");

    return 0;
}
