
#include <stdio.h>
int main()
{
    int x, y, product, modulus;
    printf("Enter any two numbers which you want to multiply and find modulus:");
    scanf("%d %d", &x, &y);
    product = x*y;
    modulus = x%y;
    printf("The product of %d and %d is %d", x, y, product);
    printf("\nThe modulus of %d and %d is %d", x, y, modulus);
    return 0;
    
}