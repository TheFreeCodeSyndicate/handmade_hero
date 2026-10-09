//program to find last digit of a number
#include<stdio.h>
int main()
{   int n,a;
    printf("Enter a number: \n");
    scanf("%d",&n);
    a = n%10;
    printf("Last digit of the number is : %d",a);
    return 0;
}