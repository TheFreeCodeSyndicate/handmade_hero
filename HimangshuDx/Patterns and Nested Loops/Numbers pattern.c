//  print the following pattern: 1 22 333 4444 (Pyramid of numbers)
// Floyd's Triangle
// Pascal's Triangle

#include <stdio.h>

int pyramid(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 1;
}

int floyds_triangle(int n) 
{
    int num = 1;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 1;
}

int pascals_triangle(int n) 
{
    for (int line = 0; line < n; line++) 
    {
        int C = 1;                                // used to represent C(line, i)
        for (int i = 0; i <= line; i++) 
        {
            printf("%d ", C);                   // print current value of C(line, i)
            C = C * (line - i) / (i + 1);      // compute next value of C(line, i)
        }
        printf("\n");
    }
    return 1;
}

int main() 
{
    int n;
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);
    printf("\nPyramid of numbers: \n");
    pyramid(n);

    printf("\nFloyd's Tiangle: \n");
    floyds_triangle(n);

    printf("\nPascal's Triangle: \n");
    pascals_triangle(n);
    
    return 0;
}