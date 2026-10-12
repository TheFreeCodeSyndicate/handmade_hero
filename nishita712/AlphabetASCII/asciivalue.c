//program to print all ascii characters with their values
#include <stdio.h>  
int main()
{
    for(int i=0;i<=255;i++)
    {
        printf("The ascii value of %c is : %d\n",i,i);
    }
    return 0;
}