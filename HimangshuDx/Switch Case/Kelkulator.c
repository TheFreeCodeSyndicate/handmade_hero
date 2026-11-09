// calculator using switch
//Write a C program to perform addition, subtraction, multiplication and division using switch.
#include<stdio.h>

int main()
{
    char operator;
    int ek, dui, uttor;

    printf("\nEnter an Operator ( + , - , x , / ): ");
    scanf("%c", &operator);

    printf("\nEnter two numbers:\n");
    scanf("%d %d", &ek, &dui);

    switch(operator)
    {
        case '+':
            uttor = ek + dui;
            printf("\n%d + %d = %d", ek, dui, uttor);
            break;
        case '-':
            uttor = ek - dui;
            printf("\n%d - %d = %d", ek, dui, uttor);
            break;
        case 'x':
            uttor = ek * dui;
            printf("\n%d x %d = %d", ek, dui, uttor);
            break;
        case '/':
            if(dui != 0)
            {
                uttor = ek / dui;
                printf("\n%d / %d = %d", ek, dui, uttor);
            }
            else
            {
                printf("\nError: Division by zero is not allowed.");
            }
            break;
        default:
            printf("\nError: You entered an invalid operator.");
    }

    return 0;
}