//check a vowel using switch case  

#include<stdio.h>

int main()
{
    char v;

    printf("\nEnter a Character (A-Z ora-z): ");
    scanf("%c", &v);

    switch(v)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("It is a vowel.");
            break;
        default:
            printf("It is not a vowel.");
    }

    return 0;
}