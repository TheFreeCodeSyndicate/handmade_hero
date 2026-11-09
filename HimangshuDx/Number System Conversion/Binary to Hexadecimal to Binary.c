
//Binary Number to Hexadecimal Number.
//Hexadecimal Number to Binary Number.

#include<stdio.h>

void Binary_Hexadecimal()
{
    int binary,temp, decimal=0, base=1, last;
    int rem, i=0;
    char hexadecimal[100], digits[]="0123456789ABCDEF";

    printf("\nOK, Let's Convert Binary Number to Hexadecimal Number.");
    printf("\nEnter a Binary Number: ");
    scanf("%d",&binary);
    temp=binary;

    if(temp < 0)
    {   printf("Please enter a non-negative number.\n");
        return;
    }

    while(temp>0)
    {
        last = temp % 10;
        if(last != 0 && last != 1)
        {   printf("Invalid binary number!");
            return;
        }
        decimal = decimal + last * base;
        base = base * 2;
        temp = temp / 10;
    }

    if(decimal == 0)
    {   printf("Hexadecimal form of %d is: 0\n", binary);
        return;
    }

    while(decimal > 0)
    {
        rem = decimal % 16;
        hexadecimal[i] = digits[rem];
        i++;
        decimal = decimal / 16;
    }

    printf("\nHexadecimal form of %d is: ", binary);

    for(i=i-1; i>=0; i--)
    {
        printf("%c", hexadecimal[i]);
    }

    printf("\n");
}

void Hexadecimal_Binary()
{
    char hex[100];
    int i, decimal=0, digit;
    int binary=0, rem, base=1;

    printf("\nOK, Let's Convert Hexadecimal Number to Binary Number.");
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

    if(decimal == 0)
    {   printf("Binary form of %s is: 0\n", hex);
        return;
    }

    while(decimal > 0)
    {
        rem = decimal % 2;
        binary = binary + rem * base;
        base = base * 10;
        decimal = decimal / 2;
    }

    printf("\nBinary form of %s is: %d\n", hex, binary);
}

int main()
{
    char mon;
    printf("\n--WELCOME TO BINARY TO HEXADECIMAL TO BINARY CONVERTER--\n");
    printf("\nTo Convert Binary to Hexadecimal Press 'B'");
    printf("\nTo Convert Hexadecimal to Binary Press 'H'");
    printf("\nEnter Your choice: ");
    scanf("%c",&mon);

    switch(mon)
    {
        case 'B':
            Binary_Hexadecimal();
            break;
        case 'b':
            Binary_Hexadecimal();
            break;
        case 'H':
            Hexadecimal_Binary();
            break;
        case 'h':
            Hexadecimal_Binary();
            break;
        default:
        {
            printf("Invalid Choise.");
            return 0;
        }
    }
    return 0;
}
