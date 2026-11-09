//Automorphic Number or not?
//All Automorphic Numbers from 1 to n.

#include<stdio.h>

int automorphic(int n)
{
    int digit = 0, temp = n, sq, power = 1;
    if(n == 0)
        return 1;

    while(temp > 0)
    {
        digit++;
        temp /= 10;
    }
    sq = n * n;
    for(int i = 1; i <= digit; i++)
        power *= 10;

    if(sq % power == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n, r;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("\nERROR: Negative numbers are not allowed.\n");
        return 0;
    }

    r=automorphic(n);

    if(r==1)
        printf("\n%d is an Automorphic Number.\n",n);
    else
        printf("\n%d is NOT an Automorphic Number.\n",n);
    
    printf("\nAutomorphic Numbers from 1 to %d are: ",n);
    for(int i=1;i<=n;i++)
    {
        if(automorphic(i)==1)
            printf("%d, ",i);
    }
    return 0;
}

//Automorphic Number: whose square ends with the exact same digits as the number itself.
// 5 square = 25 (ends with 5)
//376 square= 141376 (ends with 376)