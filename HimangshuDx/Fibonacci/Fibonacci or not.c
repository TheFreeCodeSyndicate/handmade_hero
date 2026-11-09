//Number belongs to Fibonacci Series or not?

#include<stdio.h>

int Fibonacci(int n)
{
    int a=0,b=1,c,i,f=0;

    if(n==1 || n==0)
        return 1;
    for(i=2;  ;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
            return 1;
        if(c>n)
            return 0; 
    }
}

int main()
{
    int n, f=0;
    printf("\nEnter a number to check: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("\nERROR: Please Enter a Positive number.");
        return 0;
    }

    f=Fibonacci(n);

    if(f==1)
        printf("\n%d Belongs to Fibonacci Series.",n);
    else
        printf("\n%d Does not belongs to Fibonacci Series.",n);

    return 0;
}

/* (c>n) condition tu use kora karon:  
    suppose n=10; in the loop we'll get fibonacci numbers,, and it will check 
    c=1 -- no match
    c=2 -- no match 
    c=3 -- no match..
    ............
    c=8 -- no match
    c=13 -- 13>10
    yare logic tu enekua: jodi c 10 t ke dangor e hoi gol aru tetialoike series t ami 10 bisariye napalu, teh aru bisari lav nai,, stop the program here.
*/