//Number System Converter [Full Version]
#include<stdio.h>

void Binary_Decimal()
{
    int binary, temp, decimal = 0, base = 1, last;

    printf("\nOK, Let's Convert Binary Number to Decimal Number.");
    printf("\nEnter a Binary Number: ");
    scanf("%d", &binary);
    temp = binary;
    while(temp > 0)
    {
        last = temp % 10;
        if(last != 0 && last != 1)
        {
            printf("Invalid binary number!\n");
            return;
        }
        decimal = decimal + last * base;
        base = base * 2;
        temp = temp / 10;
    }
    printf("\nDecimal form of %d is: %d\n", binary, decimal);
}

void Decimal_Binary()
{
    int decimal, temp, binary = 0, base = 1, last;
    printf("\nOK, Let's Convert Decimal Number to Binary Number.");
    printf("\nEnter a Decimal Number: ");
    scanf("%d", &decimal);
    temp = decimal;
    while(temp > 0)
    {
        last = temp % 2;
        binary = binary + last * base;
        base = base * 10;
        temp = temp / 2;
    }
    printf("\nBinary form of %d is: %d\n", decimal, binary);
}

void Binary_Octal()
{
    int binary, temp, decimal = 0, base = 1;
    int octal = 0, rem, place = 1;
    printf("\nOK, Let's Convert Binary Number to Octal Number.");
    printf("\nEnter a Binary Number: ");
    scanf("%d", &binary);
    temp = binary;
    while(temp > 0)
    {
        rem = temp % 10;
        if(rem != 0 && rem != 1)
        {
            printf("Invalid binary number.\n");
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
    printf("\nOctal form of %d is: %d\n", binary, octal);
}

void Octal_Binary()
{
    int octal, temp, decimal = 0, base = 1;
    int binary = 0, rem, place = 1;
    printf("\nOK, Let's Convert Octal Number to Binary Number.");
    printf("\nEnter an Octal Number: ");
    scanf("%d", &octal);
    temp = octal;
    while(temp > 0)
    {
        rem = temp % 10;
        if(rem > 7)
        {
            printf("Invalid octal number!\n");
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
    printf("\nBinary form of %d is: %d\n", octal, binary);
}

void Octal_Decimal()
{
    int octal, temp, decimal = 0, base = 1, last;
    printf("\nOK, Let's Convert Octal Number to Decimal Number.");
    printf("\nEnter an Octal Number: ");
    scanf("%d", &octal);
    temp = octal;
    while(temp > 0)
    {
        last = temp % 10;
        if(last > 7)
        {
            printf("Invalid octal number!\n");
            return;
        }
        decimal = decimal + last * base;
        base = base * 8;
        temp = temp / 10;
    }
    printf("\nDecimal form of %d is: %d\n", octal, decimal);
}

void Decimal_Octal()
{
    int decimal, temp, octal = 0, base = 1, last;
    printf("\nOK, Let's Convert Decimal Number to Octal Number.");
    printf("\nEnter a Decimal Number: ");
    scanf("%d", &decimal);
    temp = decimal;
    while(temp > 0)
    {
        last = temp % 8;
        octal = octal + last * base;
        base = base * 10;
        temp = temp / 8;
    }
    printf("\nOctal form of %d is: %d\n", decimal, octal);
}

void Hexadecimal_Decimal()
{
    char hex[100];
    int i, decimal = 0, digit;
    printf("\nOK, Let's Convert Hexadecimal Number to Decimal Number.");
    printf("\nEnter a Hexadecimal Number: ");
    scanf("%99s", hex);
    for(i = 0; hex[i] != '\0'; i++)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
            digit = hex[i] - '0';
        else if(hex[i] >= 'A' && hex[i] <= 'F')
            digit = hex[i] - 'A' + 10;
        else if(hex[i] >= 'a' && hex[i] <= 'f')
            digit = hex[i] - 'a' + 10;
        else
        {
            printf("Invalid hexadecimal number!\n");
            return;
        }
        decimal = decimal * 16 + digit;
    }
    printf("\nDecimal form of %s is: %d\n", hex, decimal);
}

void Decimal_Hexadecimal()
{
    int decimal, temp, rem, i = 0;
    char hex[100], digits[] = "0123456789ABCDEF";
    printf("\nOK, Let's Convert Decimal Number to Hexadecimal Number.");
    printf("\nEnter a Decimal Number: ");
    scanf("%d", &decimal);
    temp = decimal;
    if(temp == 0)
        hex[i++] = '0';
    while(temp > 0)
    {
        rem = temp % 16;
        hex[i++] = digits[rem];
        temp = temp / 16;
    }
    hex[i] = '\0';
    printf("\nHexadecimal form of %d is: ", decimal);
    for(i = i - 1; i >= 0; i--)
        printf("%c", hex[i]);
    printf("\n");
}

void Binary_Hexadecimal()
{
    int binary, temp, decimal = 0, base = 1, rem;
    int i = 0;
    char hex[100], digits[] = "0123456789ABCDEF";
    printf("\nOK, Let's Convert Binary Number to Hexadecimal Number.");
    printf("\nEnter a Binary Number: ");
    scanf("%d", &binary);
    temp = binary;
    while(temp > 0)
    {
        rem = temp % 10;
        if(rem != 0 && rem != 1)
        {
            printf("Invalid binary number!\n");
            return;
        }
        decimal = decimal + rem * base;
        base = base * 2;
        temp = temp / 10;
    }
    if(decimal == 0)
        hex[i++] = '0';
    while(decimal > 0)
    {
        rem = decimal % 16;
        hex[i++] = digits[rem];
        decimal = decimal / 16;
    }
    hex[i] = '\0';
    printf("\nHexadecimal form of %d is: ", binary);
    for(i = i - 1; i >= 0; i--)
        printf("%c", hex[i]);
    printf("\n");
}

void Hexadecimal_Binary()
{
    char hex[100];
    int i, decimal = 0, digit;
    int binary = 0, base = 1, rem;
    printf("\nOK, Let's Convert Hexadecimal Number to Binary Number.");
    printf("\nEnter a Hexadecimal Number: ");
    scanf("%99s", hex);
    for(i = 0; hex[i] != '\0'; i++)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
            digit = hex[i] - '0';
        else if(hex[i] >= 'A' && hex[i] <= 'F')
            digit = hex[i] - 'A' + 10;
        else if(hex[i] >= 'a' && hex[i] <= 'f')
            digit = hex[i] - 'a' + 10;
        else
        {
            printf("Invalid hexadecimal number!\n");
            return;
        }
        decimal = decimal * 16 + digit;
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

void Hexadecimal_Octal()
{
    char hex[100];
    int i, decimal = 0, digit, octal = 0, rem, base = 1;
    printf("\nOK, Let's Convert Hexadecimal Number to Octal Number.");
    printf("\nEnter a Hexadecimal Number: ");
    scanf("%99s", hex);
    for(i = 0; hex[i] != '\0'; i++)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
            digit = hex[i] - '0';
        else if(hex[i] >= 'A' && hex[i] <= 'F')
            digit = hex[i] - 'A' + 10;
        else if(hex[i] >= 'a' && hex[i] <= 'f')
            digit = hex[i] - 'a' + 10;
        else
        {
            printf("Invalid hexadecimal number!\n");
            return;
        }
        decimal = decimal * 16 + digit;
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
    int octal, temp, decimal = 0, base = 1, rem;
    int i = 0;
    char hex[100], digits[] = "0123456789ABCDEF";
    printf("\nOK, Let's Convert Octal Number to Hexadecimal Number.");
    printf("\nEnter an Octal Number: ");
    scanf("%d", &octal);
    temp = octal;
    while(temp > 0)
    {
        rem = temp % 10;
        if(rem > 7)
        {
            printf("Invalid octal number!\n");
            return;
        }
        decimal = decimal + rem * base;
        base = base * 8;
        temp = temp / 10;
    }
    if(decimal == 0)
        hex[i++] = '0';
    while(decimal > 0)
    {
        rem = decimal % 16;
        hex[i++] = digits[rem];
        decimal = decimal / 16;
    }
    hex[i] = '\0';
    printf("\nHexadecimal form of %d is: ", octal);
    for(i = i - 1; i >= 0; i--)
        printf("%c", hex[i]);
    printf("\n");
}


int main()
{
    int n;
    char mon;

    printf("\n--WELCOME TO THE NUMBER SYSTEM CONVERTER--\n");
    printf("The list of Conversions Available are:\n");

    printf("\n1. Binary to Decimal to Binary Converter");
    printf("\n2. Binary to Octal to Binary Converter");
    printf("\n3. Binary to Hexadecimal to Binary Converter");
    printf("\n4. Octal to Binary to Octal Converter");
    printf("\n5. Octal to Decimal to Octal Converter");
    printf("\n6. Decimal to Octal to Decimal Converter");
    printf("\n7. Hexadecimal to Decimal to Hexadecimal Converter");
    printf("\n8. Decimal to Hexadecimal to Decimal Converter");
    printf("\n9. Binary to Hexadecimal to Binary Converter");
    printf("\n10. Hexadecimal to Binary to Hexadecimal Converter");
    printf("\n11. Hexadecimal to Octal to Hexadecimal Converter");
    printf("\n12. Octal to Hexadecimal to Octal Converter");

    printf("\n\nEnter your choice (1-12): ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
        {
            printf("\nYou have selected Binary to Decimal to Binary Converter.\n");
            printf("\nTo Convert Binary to Decimal Press 'B'");
            printf("\nTo Convert Decimal to Binary Press 'D'");
            printf("\nEnter Your choice: ");
            scanf(" %c", &mon);
            if(mon == 'B' || mon == 'b')
                Binary_Decimal();
            else if(mon == 'D' || mon == 'd')
                Decimal_Binary();
            else
                printf("Invalid choice!\n");
            break;
        }

        case 2:
        {
            printf("\nYou have selected Binary to Octal to Binary Converter.\n");
            printf("\nTo Convert Binary to Octal Press 'B'");
            printf("\nTo Convert Octal to Binary Press 'O'");
            printf("\nEnter Your choice: ");
            scanf(" %c", &mon);
            if(mon == 'B' || mon == 'b')
                Binary_Octal();
            else if(mon == 'O' || mon == 'o')
                Octal_Binary();
            else
                printf("Invalid choice!\n");
            break;
        }

        case 3:
        case 9:
        {
            printf("\nYou have selected Binary to Hexadecimal to Binary Converter.\n");
            printf("\nTo Convert Binary to Hexadecimal Press 'B'");
            printf("\nTo Convert Hexadecimal to Binary Press 'H'");
            printf("\nEnter Your choice: ");
            scanf(" %c", &mon);
            if(mon == 'B' || mon == 'b')
                Binary_Hexadecimal();
            else if(mon == 'H' || mon == 'h')
                Hexadecimal_Binary();
            else
                printf("Invalid choice!\n");
            break;
        }

        case 4:
        {
            printf("\nYou have selected Octal to Binary to Octal Converter.\n");
            printf("\nTo Convert Octal to Binary Press 'O'");
            printf("\nTo Convert Binary to Octal Press 'B'");
            printf("\nEnter Your choice: ");
            scanf(" %c", &mon);
            if(mon == 'O' || mon == 'o')
                Octal_Binary();
            else if(mon == 'B' || mon == 'b')
                Binary_Octal();
            else
                printf("Invalid choice!\n");
            break;
        }

        case 5:
        {
            printf("\nYou have selected Octal to Decimal to Octal Converter.\n");
            printf("\nTo Convert Octal to Decimal Press 'O'");
            printf("\nTo Convert Decimal to Octal Press 'D'");
            printf("\nEnter Your choice: ");
            scanf(" %c", &mon);
            if(mon == 'O' || mon == 'o')
                Octal_Decimal();
            else if(mon == 'D' || mon == 'd')
                Decimal_Octal();
            else
                printf("Invalid choice!\n");
            break;
        }

        case 6:
        {
            printf("\nYou have selected Decimal to Octal to Decimal Converter.\n");
            printf("\nTo Convert Decimal to Octal Press 'D'");
            printf("\nTo Convert Octal to Decimal Press 'O'");
            printf("\nEnter Your choice: ");
            scanf(" %c", &mon);
            if(mon == 'D' || mon == 'd')
                Decimal_Octal();
            else if(mon == 'O' || mon == 'o')
                Octal_Decimal();
            else
                printf("Invalid choice!\n");
            break;
        }

        case 7:
        {
            printf("\nYou have selected Hexadecimal to Decimal to Hexadecimal Converter.\n");
            printf("\nTo Convert Hexadecimal to Decimal Press 'H'");
            printf("\nTo Convert Decimal to Hexadecimal Press 'D'");
            printf("\nEnter Your choice: ");
            scanf(" %c", &mon);
            if(mon == 'H' || mon == 'h')
                Hexadecimal_Decimal();
            else if(mon == 'D' || mon == 'd')
                Decimal_Hexadecimal();
            else
                printf("Invalid choice!\n");
            break;
        }

        case 8:
        {
            printf("\nYou have selected Decimal to Hexadecimal to Decimal Converter.\n");
            printf("\nTo Convert Decimal to Hexadecimal Press 'D'");
            printf("\nTo Convert Hexadecimal to Decimal Press 'H'");
            printf("\nEnter Your choice: ");
            scanf(" %c", &mon);
            if(mon == 'D' || mon == 'd')
                Decimal_Hexadecimal();
            else if(mon == 'H' || mon == 'h')
                Hexadecimal_Decimal();
            else
                printf("Invalid choice!\n");
            break;
        }

        case 10:
        {
            printf("\nYou have selected Hexadecimal to Binary to Hexadecimal Converter.\n");
            printf("\nTo Convert Hexadecimal to Binary Press 'H'");
            printf("\nTo Convert Binary to Hexadecimal Press 'B'");
            printf("\nEnter Your choice: ");
            scanf(" %c", &mon);
            if(mon == 'H' || mon == 'h')
                Hexadecimal_Binary();
            else if(mon == 'B' || mon == 'b')
                Binary_Hexadecimal();
            else
                printf("Invalid choice!\n");
            break;
        }

        case 11:
        {
            printf("\nYou have selected Hexadecimal to Octal to Hexadecimal Converter.\n");
            printf("\nTo Convert Hexadecimal to Octal Press 'H'");
            printf("\nTo Convert Octal to Hexadecimal Press 'O'");
            printf("\nEnter Your choice: ");
            scanf(" %c", &mon);
            if(mon == 'H' || mon == 'h')
                Hexadecimal_Octal();
            else if(mon == 'O' || mon == 'o')
                Octal_Hexadecimal();
            else
                printf("Invalid choice!\n");
            break;
        }

        case 12:
        {
            printf("\nYou have selected Octal to Hexadecimal to Octal Converter.\n");
            printf("\nTo Convert Octal to Hexadecimal Press 'O'");
            printf("\nTo Convert Hexadecimal to Octal Press 'H'");
            printf("\nEnter Your choice: ");
            scanf(" %c", &mon);
            if(mon == 'O' || mon == 'o')
                Octal_Hexadecimal();
            else if(mon == 'H' || mon == 'h')
                Hexadecimal_Octal();
            else
                printf("Invalid choice!\n");
            break;
        }

        default:
            printf("\nInvalid Choice. Please select between 1 and 12.\n");
            break;
    }

    return 0;
}
