#include<stdio.h>
int main()
{ int a,b;
     printf("Enter two numbers:");
     scanf("%d %d", &a,&b);
     
     printf("Quotient is:%d\n",a/b);
     printf("Remainder is:%d",a%b);
   return 0;
}