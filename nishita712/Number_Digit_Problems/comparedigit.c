//program to check whether the first and last digits are equal
#include <stdio.h>
int main()
{
    int n,last,first;
    printf("Enter a number: \n");
    scanf("%d",&n);
    last = n%10;
    while(n>=9)
    {
        n= n/10;
    }
    first =n;

    if(first == last)
    {
        printf("The first and last digits are equal.");
    }
    else
    {
        printf("The first and last digits are not equal.");
    }
    return 0;

}