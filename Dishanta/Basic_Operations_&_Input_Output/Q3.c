// Write a C program to find the quotient and remainder of two numbers.

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter two nnumbers:\n");
    scanf("%d %d", &a, &b);

    printf("Quotient = %d", a / b);
    printf("Remainder = %d", a % b);

    return 0;
}