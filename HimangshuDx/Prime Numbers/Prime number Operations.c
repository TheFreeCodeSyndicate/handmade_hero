//Entered number is prime or not>> check
//Print all prime numbers between 1 to n
//sum of all prime numbers between 1 and n  
//number of prime numbers between 1 and n
//largest prime number less than n
//smallest prime number greater than n

#include<stdio.h>

int prime(int n)
{
    int i,f=0;
    for(i=1; i<=n;i++)
    {
        if(n%i==0)
            f++;
    }
    if(f==2)
        return 1;
    else
        return 0;
}

int main()
{
    int n,b,i,sum=0,count=0,smallest, largest;
    printf("\nEnter the last number: ");
    scanf("%d",&n);

    //check is n prime or not>>

    b= prime(n);
    if(b==1)
        printf("\n%d is a Prime Number.",n);
    else
        printf("\n%d is not a Prime Number.",n);

    //display all prime numbers between 1 to n

    printf("\nAll Prime Numbers from 1 to %d are: ",n);
    for(i=1;i<=n;i++)
    {
        if(prime(i))
        {    printf("%d, ",i);
            sum+=i;
            count++;
        }

    }
    printf("\n\nThe number of Prime number from 1 to %d is: %d",n,count);
    printf("\nThe summation of Prime numbers from 1 to %d is: %d",n,sum);
    
    largest = n - 1;

    while(largest >= 2)
    {
        if(prime(largest))
            break;
        largest--;
    }

    if(largest >= 2)
        printf("\n\nLargest prime number less than %d is: %d", n, largest);
    else
        printf("\nNo prime number exists less than %d.", n);

    smallest = n + 1;

    while(1)
    {
        if(prime(smallest))
            break;
        smallest++;
    }
    printf("\nSmallest prime number greater than %d is: %d", n, smallest);



    return 0;
}