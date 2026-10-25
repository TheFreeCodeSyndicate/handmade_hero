//Write a C program to check whether a number is positive, negative or zero.

#include <stdio.h>
int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    if(a>0){
        printf("Entered number is positive");
    }
    else if(a<0){
        printf("Entered number is negative");
    }
    else{
        printf("Entered number is zero");
    }

    return 0;
}