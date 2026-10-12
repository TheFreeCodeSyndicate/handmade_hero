//swap 1st and last digit of a number
#include <stdio.h>
#include <string.h>
int main()
{
    char n[10],temp;
    int first =0,last ;
    printf("Enter a number:\n");
    scanf("%9s",n);
    if(n[0] == '-')
    {
        first =1;
    }
    last = strlen(n)-1;
    temp=n[first];
    n[first]=n[last];
    n[last]=temp;
    printf("The number after swapping first and last digit is %s\n",n);
    return 0;
}