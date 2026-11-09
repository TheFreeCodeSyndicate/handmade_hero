//FInd nth Fibonacci Number.

#include<stdio.h>

int Fibonacci(int n)
{
    int a=0,b=1,c,i;
    if(n==2)
    {
        printf("\nThe %dnd Fibonacci number is: 1",n); 
        return 0;
    }
    else if(n==1)
    {
        printf("\nThe %dst Fibonacci number is: 0",n); 
        return 0;
    }
    else if(n>=3)
    {    printf("\nThe %dth Fibonacci number is: ",n);
        for(i=3;i<=n;i++)
        {   c=a+b;
            a=b;
            b=c;
            if(i==n)
                printf("%d.",c);
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("\nEnter the term: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("\nERROR: Please Enter a Positive number.");
        return 0;
    }

    Fibonacci(n);

    return 0;
}