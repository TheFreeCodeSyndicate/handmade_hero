//Prime number bisara method --2

#include<stdio.h>

int main()
{
    int i,f=0,n;
    printf("\nEnter a number to check: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        printf("\n%d is Not Prime",n);
    else   
        printf("\n%d is Prime.",n);

    return 0;
}