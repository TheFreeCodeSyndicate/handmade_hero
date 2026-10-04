//program to find sum & productof first and last digit of a number
#include<stdio.h>
int main()
{
    int n,a,sum;
    printf("Enter a number: \n");
    scanf("%d",&n);
    a = n%10;
    while(n>=9)
    {
        n = n/10;
    }
    sum = a+n;
    printf("The sum of first digit and last digit is : %d",sum);
    printf("\nThe product of first digit and last digit is : %d",a*n);
    return 0;
}