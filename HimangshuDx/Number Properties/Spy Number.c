// Spy Number or not?
// Spy numbers from 1 to n

#include<stdio.h>

int spy(int n)
{
    int last,temp, sum=0, prod=1;
    temp=n;
    while(temp>0)
    {
        last=temp%10;
        sum+=last;
        prod*=last;
        temp/=10;
    }
    if(sum == prod)
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
        printf("\nERROR: Negative Numbers are not Considered.\n");
        return 0;
    }

    r=spy(n);
    if(r==1)
        printf("\n%d is a Spy Number.\n",n);
    else
        printf("\n%d is not a Spy Number.\n",n);
    
    printf("\nSpy Numbers from 1 to %d are: ",n);
    for(int i=1; i<=n; i++)
    {
        if(spy(i)==1)
            printf("%d, ",i);
    }

    return 0;
}

//Spy Number: sum of its digits is equal to product of its digits. 