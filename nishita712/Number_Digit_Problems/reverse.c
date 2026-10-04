//program to find reverse of a number
#include <stdio.h>
int reverse(int n)
{
    int rev=0,a;
    while(n>0)
    {
        a = n%10;
        rev = rev*10 +a;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    int var = reverse(n);
    printf("The reverse of the number is : %d\n",var);
    return 0;
}