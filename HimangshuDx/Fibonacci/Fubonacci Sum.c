//Sum of firs n Fibonacci Nuumbers.

#include<stdio.h>

void Fibonacci(int n)
{
    int a=0,b=1,c,sum=0;     
    printf("Fibonacci Series up to %d Term is: %d, %d, ",n,a,b);
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d, ",c);
        a=b;
        b=c;
        sum+=c;
    }
    printf("\nThe sum of the numbers of Fibonacci series is: %d",sum+1);

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

// long long int:  jetia ami n=100 dim, tetia eta time t goi 'c' aru 'sum' r value barhi goi goi int r limit cross kori diye,, so we need long long int to get correct output.  scanf("%lld",&a);  printf("%lld",a); 
//but mur compiller e Long long int support nai kora kio ba, so moi code tu int t ee thakibo dilu..