//Strong Number or not?
//All strong number to n.
//summation of them to n.

#include<stdio.h>

int strong(int n)
{
    int i,last,temp, f,sum=0;
    temp=n;
    while(temp>0)
    {
        last=temp%10;
        f=1;
        for(i=1;i<=last;i++)
            f*=i;
        sum+=f; 
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
    
    r=strong(n);
    if(r==1)
        printf("\n%d is a Strong Number.\n",n);
    else   
        printf("\n%d is not a Strong Number.",n);

    int sum=0;
    printf("\nStrong Number from 1 to %d are: ",n);
    for(int i=1; i<=n;i++)
    {
        if(strong(i)==1)
        {
           printf("%d, ",i);
           sum+=i;
        }
    }
    printf("\nThe summation of Strong number from 1 to %d is: %d",n,sum);
    
    return 0;
}


//Strong Number: Sum of Factorial of Digits is equal to the number itself. 