//Array etat kiman ta prime number ase? aru ki ki?
#include<stdio.h>

int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;    
}

int main()
{
    int n, i, count=0;
    printf("\nEnter the size of the ARRAY: ");
    scanf("%d",&n);
    
    int a[n];
    printf("\nEnter the elements of the ARRAY: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("\nThe Prime Numbers in the Array are: ");
    for(i=0;i<n;i++)
    {
        if(prime(a[i]) && a[i]>1)
        {
            printf("%d, ",a[i]);
            count++;
        }
    }
    printf("\nTotal Prime Numbers in the Array: %d",count);
    return 0;
}