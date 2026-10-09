//program to print ascii values of uppercase letters
#include<stdio.h>
int main()
{
     char ch='A';
     while(ch<='Z')
     {
         printf("The ascii value of %c is : %d\n",ch,ch);
         ch++;
     }
     return 0;
}