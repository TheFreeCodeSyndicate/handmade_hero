// power of a number using a for loop
//calculate x^n without using the pow() function. 

#include<stdio.h>

int main()
{
    int number, power, uttor=1, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\nEnter the Power: ");
    scanf("%d", &power);

    for(i=1;i<=power;i++)
        uttor = uttor * number;
    
    printf("\n%d to the power of %d is: %d", number, power, uttor);



    return 0;
}

/*
   -> pow() function is used to calculate the power of a number. It takes two arguments, the base and the exponent, and returns the result of raising the base to the power of the exponent. The syntax for using the pow() function is as follows:

    double pow(double base, double exponent); 

   ->  #include<math.h>   header file tu lage to use pow() function. 
*/
