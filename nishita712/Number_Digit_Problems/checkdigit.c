//program to find the largest  digit in a number.
#include<stdio.h>
int main()
{
    int n,max=-1,a;
    printf("Enter a number: \n");
    scanf("%d",&n);
    while(n>0)
    {
    a = n%10;
    if(a>max)
    max=a;
    n=n/10;
    }
    printf("The largest digit of the number is : %d",max);
    return 0;
}