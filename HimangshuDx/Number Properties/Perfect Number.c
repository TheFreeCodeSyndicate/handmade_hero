// Perfect Number of not?
// Perfect Number from 1 to n

#include<stdio.h>

int perfect(int n)
{
    int i,sum=0; 
    for(i=1;i<n;i++)     // (i<=n)Likhibo nuaru karon: jetia i=n hobo tetia tolot if statement tut n%n==0 hobo tetia number tue nijoke divisor hisape add koribo. so ami i tu n r equal hobo dibo nuaru.. that's why (i<n)
    {
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n, r;
    printf("\nEnter a Number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("\nERROR: Negative Numbers are not considered.\n");
        return 0;
    }
    r=perfect(n);
    if(r==1)
        printf("\n%d is a Perfect Number.\n",n);
    else 
        printf("\n%d is Not a Perfect Number.\n",n);
    
    printf("Perfect Numbers from 1 to %d are: ",n);
    for(int i=1;i<=n;i++)
    {
        if(perfect(i))
            printf("%d, ",i);
    }
    
    return 0;
}


//Perfect Number: Number tur factors khinir sum is equal to number itself.. 