//find the most frequent digit in a given number.
#include <stdio.h>
int main()
{
    int n,a,freq[10]={0},i,max=0;
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
        if(freq[i]>max)
        {
            max=freq[i];
        }
    }
    for(i=0;i<10;i++)
    {
        if(freq[i]==max)
        {
            printf("The most frequent digit is %d with frequency %d\n",i,max);
            break;
        }
    }
    return 0;
}