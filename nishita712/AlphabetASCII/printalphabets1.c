//print all alphabets from z to a
#include <stdio.h>      
int main()
{
    char ch='z';
    while(ch>='a')
    {
        printf("%c\n",ch);
        ch--;
    }
    return 0;
}