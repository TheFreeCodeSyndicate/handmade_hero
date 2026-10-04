//program to print ascii values of lowercase letters
#include<stdio.h>
int main()
{
     char ch='a';
     while(ch<='z')
     {
         printf("The ascii value of %c is : %d\n",ch,ch);
         ch++;
     }
     return 0;
}