//program to calculate the sum and products of digits of a number
#include<stdio.h>
int main()
{
    int n,sum=0,a,prod=1;
    printf("Enter a number: \n");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        sum =sum+a;
        prod=prod*a;
        n=n/10;
}
    printf("The sum of digits is: %d\n",sum);
    printf("The product of digits is: %d\n",prod);
    return 0;
}