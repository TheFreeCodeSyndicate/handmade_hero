//count how many times a digit occurs in a number
#include<stdio.h>
int count_digit(int n,int digit)
{
    int count=0,a;
    while(n>0)
    {
        a=n%10;
        if(a==digit)
        count++;
        n=n/10;
    }
    return count;
}
int main()
{
    int num,digit;
    printf("Enter a numberr:\n");
    scanf("%d",&num);
    printf("Entera digit to count:\n");
    scanf("%d",&digit);
    int var = count_digit(num,digit);
    printf("The digit occurs %d times in the number\n",var);
    return 0;
}