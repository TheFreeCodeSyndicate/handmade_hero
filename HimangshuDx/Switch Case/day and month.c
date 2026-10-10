//day of the week using switch 
//month name using switch

#include<stdio.h>

int main()
{
    int day,month; 
    printf("\nEnter a number for Printing Day (1-7): ");
    scanf("%d", &day);

    printf("\nEnter a number for Printing Month (1-12): ");
    scanf("%d", &month);

    switch(day)
    {
        case 1:
            printf("Monday - ");
            break;
        case 2:
            printf("Tuesday - ");
            break;
        case 3:
            printf("Wednesday - ");
            break;
        case 4:
            printf("Thursday - ");
            break;
        case 5:
            printf("Friday - ");
            break;
        case 6:
            printf("Saturday - ");
            break;
        case 7:
            printf("Sunday - ");
            break;
        default:
            printf("Invalid input");
    }

    switch(month)
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Invalid input");
    }
    
    return 0;
}


// is this a calender???  -> not i guess 