//Binary Number to Decimal Number.
//Decimal Number to Binary. 

#include<stdio.h>

void Binary_Decimal()
{
    int binary,temp, decimal=0, base=1, last;
    printf("\nOK, Let's Convert Binary Number to Decimal Number.");
    printf("\nEnter a Binary Number: ");
    scanf("%d",&binary);
    temp=binary;
    while(temp>0)
    {
        last = temp % 10;
        if(last != 0 && last != 1)
        {   printf("Invalid binary number!");
            break;
        }
        decimal = decimal + last * base;
        base = base * 2;
        temp = temp / 10;
    }
    printf("\nDecimal form of %d is: %d", binary, decimal);
}

void Decimal_Binary()
{
    int decimal,temp, rem, binary = 0, base = 1;
    printf("\nOK, Let's convert Decimal Number to Binary Number.");
    printf("\nEnter a Decimal number: ");
    scanf("%d", &decimal);
    temp=decimal;
    if(temp < 0)
    {   printf("Please enter a non-negative number.\n");
        return;
    }
    if(temp == 0)
    {   printf("Binary number = 0\n");
        return;
    }

    while(temp > 0)
    {
        rem = temp % 2;
        binary = binary + rem * base;
        base = base * 10;
        temp = temp / 2;
    }

    printf("\nBinary form of %d is = %d\n",decimal, binary);
}

int main()
{
    char mon;
    printf("\n--WELCOME TO BINARY TO DECIMAL TO BINARY CONVERTER--\n");
    printf("\nTo Convert Binary to Decimal Press 'B'");
    printf("\nTo Conver Decimal to Binary Press 'D'");
    printf("\nEnter Your choice: ");
    scanf("%c",&mon);

    switch(mon)
    {
        case 'B':
            Binary_Decimal();
            break;
        case 'b':
            Binary_Decimal();
            break;
        case 'D':
            Decimal_Binary();
            break;
        case 'd':
            Decimal_Binary();
            break;
        default:
        {
            printf("Invalid Choise.");
            return 0;
        }
    }
    return 0;
}