//program to find the frequency of each digit in a given integer.
#include <stdio.h>
int main()
{
    int n,a,i;
    int freq[10]={0};
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        freq[a]++;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(freq[i]!=0)
        {
            printf("The frequency of %d is : %d\n",i,freq[i]);
        }
    }
    return 0;
}