// check a number is an Armstrong number
// all Armstrong numbers between 1 and n.
// sum of all Armstrong numbers between 1 and n.

#include<stdio.h>
#include<stdbool.h>

int armstsrong(int n)
{
    int temp, digit=0,sum=0,power=1,last;
    temp =n;

    while(temp>0)
    {
        digit++;
        temp/=10; 
    }
    temp =n;
    while(temp>0)
    {
        last= temp%10;
        for(int i=1; i<=digit;i++)
        {
            power*=last;
        }
        sum+=power;
        power=1;
        temp/=10;
    }
    if(sum==n)
        return true;
    else
        return false;
}

int main()
{
    int n, sum=0;
    printf("\nEnter a Number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("\nERROR: Negative Numbers are not considered.\n");
        return 0;
    }

    int r= armstsrong(n);
    if(r)
        printf("\n%d is an Armstrong Number.\n",n);
    else   
        printf("\n%d is not an Armstrong Number.\n",n);
    
    printf("\nThe Armstrong numbers from 1 to %d are: ",n);    
    for(int i=1; i<=n; i++)
    {
        if(armstsrong(i))
        {
            printf("%d, ",i);
            sum+=i;
        }
    }
    printf("\nThe Summation of Armstrong Numbers from 1 to %d is: %d\n\n",n,sum);

    return 0;
}

//Armstrong number: Number tur number of digit is the power,, and digit keita eta eta ke number of digits times power kori add korile we'll get number itself.