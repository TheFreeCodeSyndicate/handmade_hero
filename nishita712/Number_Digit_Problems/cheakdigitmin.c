//program to find the smallest digit in a number.
#include<stdio.h>
int main()
{
    int n,min=10,a;
    printf("Enter a number: \n");
    scanf("%d",&n);
    while(n>0)
    {
    a = n%10;
    if(a<min)
    min=a;
    n=n/10;
    }
    printf("The smallest digit of the number is : %d",min);
    return 0;
}