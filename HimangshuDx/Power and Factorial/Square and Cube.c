// square of a number using a loop
// cube of a number using a loop

#include<stdio.h>

int square(int n)
{
    int uttor=1;
    for(int i=1;i<=2;i++)
        uttor=uttor*n;
    return uttor;
}

int cube(int n)
{
    int uttor=1;
    for(int i=1;i<=3;i++)
        uttor=uttor*n;
    return uttor;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("\nThe Square of %d is: %d", n, square(n));

    printf("\nThe Cube of %d is: %d", n, cube(n));
    
    return 0;
}