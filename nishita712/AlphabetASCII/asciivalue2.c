//program to input an ASCII value and print its character
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the ASCII value : \n");
    scanf("%d",&n);
    printf("The character of ASCII value %d is : %c\n",n,n);
    return 0;
}