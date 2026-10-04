//program to find first digit of a number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    while(n>=9)
    {
        n = n/10;
    }
    printf("1st digit of the number is : %d",n);
}