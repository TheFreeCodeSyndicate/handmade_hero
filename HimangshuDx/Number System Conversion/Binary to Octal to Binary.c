//Binary to Octal 
//Octal to Binary

#include<stdio.h>

void Binary_Octal()
{
    int binary, temp, decimal = 0, base = 1, octal = 0, rem, place = 1;
    printf("\nOK, Let'c Convert Binary Number to Octal Number.");
    printf("\nEnter a Binary Number: ");
    scanf("%d", &binary);
    if(binary < 0)
    {   printf("Invalid binary number.\n");
        return;
    }
    temp = binary;

    while(temp > 0)
    {
        rem = temp % 10;
        if(rem != 0 && rem != 1)
        {   printf("Invalid binary number.\n");
            return;
        }
        decimal = decimal + rem * base;
        base = base * 2;
        temp = temp / 10;
    }
    while(decimal > 0)
    {
        rem = decimal % 8;
        octal = octal + rem * place;
        place = place * 10;
        decimal = decimal / 8;
    }

    printf("Octal form of %d is = %d\n",binary, octal);
}

void Octal_Binary()
{
    int octal, temp,decimal = 0, base = 1, binary = 0, rem, place = 1;
    printf("\nOk,Let's convert Octal Number to Binary Number.");
    printf("\nEnter an octal number: ");
    scanf("%d", &octal);
    if(octal < 0)
    {   printf("Invalid octal number.\n");
        return;
    }
    temp = octal;

    while(temp > 0)
    {
        rem = temp % 10;
        if(rem > 7)
        {   printf("Invalid octal number.\n");
            return;
        }
        decimal = decimal + rem * base;
        base = base * 8;
        temp = temp / 10;
    }
    while(decimal > 0)
    {
        rem = decimal % 2;
        binary = binary + rem * place;
        place = place * 10;
        decimal = decimal / 2;
    }

    printf("Binary Form of the number %d is = %d\n",octal, binary);
}

int main()
{
    char mon;
    printf("\n--WELCOME TO BINARY TO OCTAL TO BINARY CONVERTER--\n");
    printf("\nTo Convert Binary to Octal Press 'B'");
    printf("\nTo Conver Octal to Binary Press 'O'");
    printf("\nEnter Your choice: ");
    scanf("%c",&mon);

    switch(mon)
    {
        case 'B':
            Binary_Octal();
            break;
        case 'b':
            Binary_Octal();
            break;
        case 'O':
            Octal_Binary();
            break;
        case 'o':
            Octal_Binary();
            break;
        default:
        {
            printf("Invalid Choise.");
            return 0;
        }
    }
    return 0;
}