//Prime number bisara method-1

#include<stdio.h>

int main()
{
    int n,i, prime;
    printf("\nEnter a number to check: ");
    scanf("%d", &n);

    prime=1;

    if(n<=1)
        prime=0;
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                prime= 0;
        }
    }
    if(prime==1)
        printf("\nIt is a Prime Number.");
    else
        printf("\nIt is Not a Prime Number");
    
    printf("\nPrime Numbers from 1 to %d are: ",n);
    for(i=1;i<=n;i++)
    {
        prime=1;
        if(n<=1)
            prime=0;
        else
        {   
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                    prime=0;
            }
        }
        if(prime==1)
            printf("%d, ",i);
    }
    return 0;
}