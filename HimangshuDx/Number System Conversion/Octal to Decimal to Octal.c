
//Octal Number to Decimal Number.
//Decimal Number to Octal Number.

#include<stdio.h>

void Octal_Decimal()
{
    int octal,temp, decimal=0, base=1, last;
    printf("\nOK, Let's Convert Octal Number to Decimal Number.");
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

    printf("\nDecimal form of %d is: %d", octal, decimal);
}

void Decimal_Octal()
{
    int decimal,temp, rem, octal = 0, base = 1;
    printf("\nOK, Let's convert Decimal Number to Octal Number.");
    printf("\nEnter a Decimal number: ");
    scanf("%d", &decimal);
    temp=decimal;

    if(temp < 0)
    {   printf("Please enter a non-negative number.\n");
        return;
    }
    if(temp == 0)
    {   printf("Octal number = 0\n");
        return;
    }

    while(temp > 0)
    {
        rem = temp % 8;
        octal = octal + rem * base;
        base = base * 10;
        temp = temp / 8;
    }

    printf("\nOctal form of %d is = %d\n",decimal, octal);
}

int main()
{
    char mon;
    printf("\n--WELCOME TO OCTAL TO DECIMAL TO OCTAL CONVERTER--\n");
    printf("\nTo Convert Octal to Decimal Press 'O'");
    printf("\nTo Convert Decimal to Octal Press 'D'");
    printf("\nEnter Your choice: ");
    scanf("%c",&mon);

    switch(mon)
    {
        case 'O':
            Octal_Decimal();
            break;
        case 'o':
            Octal_Decimal();
            break;
        case 'D':
            Decimal_Octal();
            break;
        case 'd':
            Decimal_Octal();
            break;
        default:
        {
            printf("Invalid Choise.");
            return 0;
        }
    }
    return 0;
}