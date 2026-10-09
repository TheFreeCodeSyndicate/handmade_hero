//program to print ascii values of digits
#include<stdio.h>
int main()
{
    char ch ='0';
    while(ch<='9')
    {
        printf("The ascii value of %c is : %d\n",ch,ch);
        ch++;
    }
    return 0;
}