//Only even Fibonacci numbers to n

#include<stdio.h>
void Fibonacci(int n)
{
    
    int a=0,b=1,c,i;
    printf("The Fibonacci Series is: %d, %d, ",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d, ",c);
        a=b;
        b=c;
    }
}

void Fibonacci_even(int n)
{
    int a=0,b=1,c,i;
    printf("\n\nEven Numbers of the Fibonacci Series are: ");
    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c%2==0)
            printf("%d, ",c);
    }
}

void Fibonacci_odd(int n)
{
    int a=0,b=1,c,i;
    printf("\nOdd Numbers of the Fibonacci Series are: ");
    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c%2==1)
            printf("%d, ",c);
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
    Fibonacci_even(n);
    Fibonacci_odd(n);

    return 0;
}