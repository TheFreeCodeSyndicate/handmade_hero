//find both HCF and LCM of two numbers. 

#include<stdio.h>

int HCF(int a, int b)
{
    int i, hcf;
    for(i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    printf("\nThe HCF of %d and %d is: %d",a,b,hcf);

    return 0;
}

int LCM(int a, int b)
{
    int i;
    printf("\nThe LCM of %d and %d is: ",a,b);
    for(i=a; ;i++)    
    {
        if(i%a==0 && i%b==0)    
        {   printf("%d",i);
            break;
        }
    }
    return 1;
}

int main()
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a, &b);
    if(a<=0 || b<=0)
    {
        printf("\nPlease Enter two positive numbers.");
        return 0;
    }

    HCF(a,b);
    LCM(a,b);

    return 0;
}