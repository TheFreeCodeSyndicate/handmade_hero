//Odd Even in an array

#include <stdio.h>

void Even(int a[], int n)
{
    int i;
    printf("\nThe even numbers of the array are: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            printf("%d, ", a[i]);
    }
}
void Odd(int a[], int n)
{
    int i;
    printf("\nThe Odd numbers of the array are: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
            printf("%d, ", a[i]);
    }
}

int main() 
{
    int n,i;
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the array elements: ");
    for(i=0;i<n;i++) 
        scanf("%d",&a[i]);

    Odd(a,n);
    Even(a,n);
        
    return 0;
}