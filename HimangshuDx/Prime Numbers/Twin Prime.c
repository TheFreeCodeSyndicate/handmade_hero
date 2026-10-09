//check two numbers are twin primes.
//Twin Primes mane enekuwa duta prime number, jidutar difference exactly 2.
//Example (3 and 5), (5 aru 7), (11 aru 13) etc are twin prim ... but (7 aru 11) nohoy karon ehotor major diff 4.

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
    int a, b;

    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    if(prime(a) && prime(b) && (a - b == 2 || b - a == 2))
    {
        printf("\n%d and %d are Twin Prime Numbers.", a, b);
    }
    else
    {
        printf("\n%d and %d are not Twin Prime Numbers.", a, b);
    }

    return 0;
}
