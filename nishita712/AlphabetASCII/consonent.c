//program to print all consonants from a to z
#include <stdio.h>      
int main()
{
    char ch='a';
    while(ch<='z')
    {
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')
        printf("%c\n",ch);
        ch++;
    }
    return 0;
}