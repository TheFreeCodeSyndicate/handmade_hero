//program to find the digit with least frequency in a number
#include <stdio.h>
int main()
    {
       int n,a,i,min=10,freq[10]={0}; 
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
        if(freq[i]<min && freq[i]!=0)
        min = freq[i];
    }
    for(i=0;i<10;i++)
    {
        if(freq[i]==min)
        {
            printf("The least frequent digit is %d with frequency %d\n",i,min);
        }
    }
    return 0;
    }
