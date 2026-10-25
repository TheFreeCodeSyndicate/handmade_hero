//Write a C program to perform multiplication (*) and modulus (%) of two numbers.

#include<stdio.h>
int main()
{
    int a, b, Multiplication, Modulus;

    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    
    Multiplication = a * b ;
    Modulus = a % b ;
    
    printf("The multiplication of the given numbers %d and %d is %d \n", a , b, Multiplication);
    printf("The modulus of the given numbers %d and %d is %d", a, b, Modulus);
    
    //Bhal readability r babe space add korisu(yum wala emoji)
    
    return 0;
}