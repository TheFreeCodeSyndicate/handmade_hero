//program to count the number of digits in a number
#include<stdio.h>
int main()
{
    int n,r,a,count=0;
    printf("Enter a number : \n");
    scanf("%d",&n);
    r=n;
    while(n>0)
    {
        a = n%10;
        count++;
        n = n/10;
    }
    printf("Number of digit in %d is %d",r,count);
    return 0;
}
