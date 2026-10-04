//print capital letters from Z to A
#include<stdio.h>
int main()
{
    char ch ='Z';
    for(int i = ch;i>='A';i--)
    {
        printf("%c\n",i);
    }
    return 0;
}