//Write a C program to perform addition, subtraction, multiplication and division of two numbers.

#include<stdio.h>
int main()
{
    int a, b, Addition, Substraction, Multiplication;
    float Division;
    
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    Addition = a + b;
    Substraction = a - b;
    Multiplication = a * b;
    Division = (float)a / b;

    printf("The addition of the given numbers %d and %d is %d\n", a, b, Addition);
    printf("The Substraction of the given numbers %d and %d is %d\n", a, b, Substraction);
    printf("The Multiplication of the given numbers %d and %d is %d\n", a, b, Multiplication);
    printf("The Division between the given numbers %d and %d is %f\n", a, b, Division);

    return 0;
}
