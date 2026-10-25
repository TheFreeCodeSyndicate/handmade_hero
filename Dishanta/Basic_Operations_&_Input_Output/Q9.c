//Write a C program to find the perimeter of a square.

#include <stdio.h>
int main()
{
    int Side, Perimeter;
    printf("Enter the sides of the square:");
    scanf("%d", &Side);

    Perimeter = 4 * Side;

    printf("The perimeter of the square is %d", Perimeter);

    return 0;
}