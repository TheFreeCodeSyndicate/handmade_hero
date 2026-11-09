// Fibonacci series up to n terms.

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
    }

}

int main()
{
    int n;
    printf("\nEnter the number of terms of the Fibonacci series: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("\nERROR: Please Enter a Positive number.");
        return 0;
    }

    Fibonacci(n);

    return 0;
}