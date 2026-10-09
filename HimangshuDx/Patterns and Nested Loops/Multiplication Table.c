//Multiplication Table

#include <stdio.h>

int table(int n)
{
    for(int i=1; i<=10; i++)
        printf("%d x %d = %d\n", n, i, n*i);
    
    return 1;
}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("\nThe Multiplication Table of %d is:\n", n);
    table(n);

    return 0;
}