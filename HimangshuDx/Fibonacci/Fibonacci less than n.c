//Print Fibonacci series less than the entered number.

#include<stdio.h>

void Fibonacci(int n)
{
    int a=0,b=1,c,i;
    printf("Fibonacci Series up to %d is: %d, %d, ",n,a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d, ",c);
        a=b;
        b=c;
        if(c==n)
            break;
    }

}

int main()
{
    int n;
    printf("\nEnter the last number of the series: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("\nERROR: Please Enter a Positive number.");
        return 0;
    }

    Fibonacci(n);

    return 0;
}