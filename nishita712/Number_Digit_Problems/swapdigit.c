//program to swap 1st and last digit of a number
#include <stdio.h>
int main()
{
    int n,first,last,place=1;
    printf("Enter a number: \n");
    scanf("%d",&n);
    last = n%10;
    first = n;
    while(first>=10)
    {
        first = first/10;
        place=place*10;
    }
    n = n-first*place-last;
    n=last*place+n+first;
    printf("The number after swapping first and last digit is : %d\n",n);
    return 0;

}