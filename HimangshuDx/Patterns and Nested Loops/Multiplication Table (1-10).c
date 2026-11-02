// Multiplication table form 1 to 10

#include<stdio.h>

int main()
{
    int i, j;

    for(i=1; i<=10; i++)
    {
        printf("\nMultiplication Table of %d\n", i);
        for(j=1; j<=10; j++)
            printf("%d x %d = %d\n", i, j, i*j);
        printf("\n");
    }

    return 0;
}

//eitu code mur RUN kori sabo mon nai (>_<)