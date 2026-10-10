//All factors of a number.
//Number of Factors of a number.
//Sum of all Factors of a number.
//check a number has exactly two factors. 

#include<stdio.h>

int factor(int n)
{
    int i;
    printf("\nThe Factors of %d are: ",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d, ",i);
        }
    }

    return 1;
}

int factor_count(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    printf("\nThe number of Factors of %d is: %d",n,count);
    return 1;
}

int factor_sum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    printf("\nThe Sum of all Factors of %d is: %d",n,sum);
    return 1;
}

int largest_smallest(int n)
{
    int i;
    for(i = n - 1; i >= 1; i--)
    {
        if(n % i == 0)
        {
            printf("\n\nThe Largest factor of %d other than itself is: %d", n, i);
            break;
        }
    }
    //loop tu ulta ke ghurai disu, jate lastor pora factor check kori ahi thake,, from n to 1. Tetia jotei (n%i==0) hobo xeitue i.e the first one is the largest one yo yo yo

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("\nThe Smallest factor of %d other thaan 1 is: %d",n,i);
            break;
        }
    }

    return 1;
}

int two_factor(int n)
{
    int i, f=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            f++;
    }
    if(f==2)
        printf("\n\n%d has exactly two factors. It is a Prime Number.\n\n",n);
    else
        printf("\n\n%d Does not have exactly two factors.\n\n",n);
    
    return 1;
}

int main()
{
    int n;
    printf("\nEnter a Number: ");
    scanf("%d",&n);
     if(n <= 1)
    {
        printf("\nNo factor exists other than the number itself.");
        return 0;
    }

    factor(n);
    factor_count(n);
    factor_sum(n);
    largest_smallest(n);
    two_factor(n);

    return 0;
}