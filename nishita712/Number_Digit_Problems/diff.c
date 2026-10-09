//program to find difference of smallest and largest digit in a number.
#include<stdio.h>
int main()
{
    int n,min=10,max=-1,a;
    printf("Enter a number: \n");
    scanf("%d",&n);
    while(n>0)
    {
    a = n%10;
    if(a<min)
    {
        min=a;
    }
    if(a>max)
    {
        max=a;
    }
    n=n/10;
    }
    printf("The difference of largest and smallest digit of the number is : %d",max-min);
    return 0;
}