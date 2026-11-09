
//Hexadecimal Number to Decimal Number.
//Decimal Number to Hexadecimal Number.

#include<stdio.h>

void Hexadecimal_Decimal()
{
    char hex[100];
    int i, decimal=0, digit;

    printf("\nOK, Let's Convert Hexadecimal Number to Decimal Number.");
    printf("\nEnter a Hexadecimal Number: ");
    scanf("%99s",hex);

    for(i=0; hex[i]!='\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
            digit = hex[i] - '0';
        else if(hex[i]>='A' && hex[i]<='F')
            digit = hex[i] - 'A' + 10;
        else if(hex[i]>='a' && hex[i]<='f')
            digit = hex[i] - 'a' + 10;
        else
        {   printf("Invalid hexadecimal number!");
            return;
        }

        decimal = decimal * 16 + digit;
    }

    printf("\nDecimal form of %s is: %d", hex, decimal);
}

void Decimal_Hexadecimal()
{
    int decimal,temp, rem, i=0;
    char hexadecimal[100], digits[]="0123456789ABCDEF";

    printf("\nOK, Let's convert Decimal Number to Hexadecimal Number.");
    printf("\nEnter a Decimal number: ");
    scanf("%d", &decimal);
    temp=decimal;

    if(temp < 0)
    {   printf("Please enter a non-negative number.\n");
        return;
    }
    if(temp == 0)
    {   printf("Hexadecimal number = 0\n");
        return;
    }

    while(temp > 0)
    {
        rem = temp % 16;
        hexadecimal[i] = digits[rem];
        i++;
        temp = temp / 16;
    }

    printf("\nHexadecimal form of %d is = ",decimal);

    for(i=i-1; i>=0; i--)
    {
        printf("%c", hexadecimal[i]);
    }

    printf("\n");
}

int main()
{
    char mon;
    printf("\n--WELCOME TO HEXADECIMAL TO DECIMAL TO HEXADECIMAL CONVERTER--\n");
    printf("\nTo Convert Hexadecimal to Decimal Press 'H'");
    printf("\nTo Convert Decimal to Hexadecimal Press 'D'");
    printf("\nEnter Your choice: ");
    scanf("%c",&mon);

    switch(mon)
    {
        case 'H':
            Hexadecimal_Decimal();
            break;
        case 'h':
            Hexadecimal_Decimal();
            break;
        case 'D':
            Decimal_Hexadecimal();
            break;
        case 'd':
            Decimal_Hexadecimal();
            break;
        default:
        {
            printf("Invalid Choise.");
            return 0;
        }
    }
    return 0;
}
