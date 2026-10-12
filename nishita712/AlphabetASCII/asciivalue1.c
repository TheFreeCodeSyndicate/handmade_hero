//program to input a character and print its ASCII value
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: \n");
    scanf("%c",&ch);
    printf("The ASCII value of %c is : %d\n",ch,ch);
    return 0;
}