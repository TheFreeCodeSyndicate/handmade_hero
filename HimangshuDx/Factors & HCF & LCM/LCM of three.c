//Least Common Multiple(LCM) oof three numbers.

#include<stdio.h>

int LCM(int a, int b, int c)
{
    int i;
    printf("\nLCM of %d, %d and %d is: ",a,b,c);
    for(i=a; ;i++)    
    {
        if(i%a==0 && i%b==0 && i%c==0)    
        {   printf("%d",i);
            break;
        }
    }
    return 1;
}

int main()
{
    int a,b,c;
    printf("\nEnter Three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a<=0 || b<=0 || c<=0)
    {   printf("\nPlease enter Three Positive Numbers.");
        return 0;
    }

    LCM(a,b,c);

    return 0;
} 