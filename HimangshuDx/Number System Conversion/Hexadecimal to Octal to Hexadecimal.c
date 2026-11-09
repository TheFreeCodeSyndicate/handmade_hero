
//Hexadecimal Number to Octal Number.
//Octal Number to Hexadecimal Number.

#include<stdio.h>

void Hexadecimal_Octal()
{
    char hex[100];
    int i, decimal=0, digit;
    int octal=0, rem, base=1;

    printf("\nOK, Let's Convert Hexadecimal Number to Octal Number.");
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
    {   printf("Octal form of %s is: 0\n", hex);
        return;
    }

    while(decimal > 0)
    {
        rem = decimal % 8;
        octal = octal + rem * base;
        base = base * 10;
        decimal = decimal / 8;
    }

    printf("\nOctal form of %s is: %d\n", hex, octal);
}

void Octal_Hexadecimal()
{
    int octal,temp, decimal=0, base=1, last;
    int rem, i=0;
    char hexadecimal[100], digits[]="0123456789ABCDEF";

    printf("\nOK, Let's Convert Octal Number to Hexadecimal Number.");
    printf("\nEnter an Octal Number: ");
    scanf("%d",&octal);
    temp=octal;

    if(temp < 0)
    {   printf("Please enter a non-negative number.\n");
        return;
    }

    while(temp>0)
    {
        last = temp % 10;
        if(last < 0 || last > 7)
        {   printf("Invalid octal number!");
            return;
        }
        decimal = decimal + last * base;
        base = base * 8;
        temp = temp / 10;
    }

    if(decimal == 0)
    {   printf("Hexadecimal form of %d is: 0\n", octal);
        return;
    }

    while(decimal > 0)
    {
        rem = decimal % 16;
        hexadecimal[i] = digits[rem];
        i++;
        decimal = decimal / 16;
    }

    printf("\nHexadecimal form of %d is: ", octal);

    for(i=i-1; i>=0; i--)
    {
        printf("%c", hexadecimal[i]);
    }

    printf("\n");
}

int main()
{
    char mon;
    printf("\n--WELCOME TO HEXADECIMAL TO OCTAL TO HEXADECIMAL CONVERTER--\n");
    printf("\nTo Convert Hexadecimal to Octal Press 'H'");
    printf("\nTo Convert Octal to Hexadecimal Press 'O'");
    printf("\nEnter Your choice: ");
    scanf("%c",&mon);

    switch(mon)
    {
        case 'H':
            Hexadecimal_Octal();
            break;
        case 'h':
            Hexadecimal_Octal();
            break;
        case 'O':
            Octal_Hexadecimal();
            break;
        case 'o':
            Octal_Hexadecimal();
            break;
        default:
        {
            printf("Invalid Choise.");
            return 0;
        }
    }
    return 0;
}
