// Neon Number or not?
//Print all Neon number from 1 to m.
// Sum of them/

#include<stdio.h>

int neon(int n)
{
    int last,temp, p=1,sum=0;
    p=n*n;
    temp=p;
    while(temp>0)
    {
        last=temp%10;
        sum+=last;
        temp/=10;
    }
    if(sum==n)
        return 1;
    else 
        return 0;
}

int main()
{
    int n, r;
    printf("\nEnter a Number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("\nERROR: Negative numbers are not considered.\n");
        return 0;
    }
    
    r=neon(n);
    if(r==1)
        printf("\n%d is a Neon Number.\n",n);
    else   
        printf("\n%d is not a Neon Number.\n",n);

    int sum=0;
    printf("\nNeon Number from 1 to %d are: ",n);
    for(int i=1; i<=n;i++)
    {
        if(neon(i)==1)
        {
           printf("%d, ",i);
           sum+=i;
        }
    }
    printf("\nThe summation of Neon number from 1 to %d is: %d",n,sum);
    
    return 0;
}


//Neon Number: it is the sum of square of digits. 