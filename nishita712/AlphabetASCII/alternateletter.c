//program to print alternate alphabets from a to z
#include <stdio.h>
int main()      
{
    char ch='a';
    while(ch<='z')
    {
        printf("%c\n",ch);
        ch+=2;
    }
    return 0;
}