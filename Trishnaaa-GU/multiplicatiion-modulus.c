#include<stdio.h>
int main()
{ int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a,&b);
    
    printf("The multiplication of given nos is:%d\n",a*b);
    printf("The modulus of the guven nos is:%d",a%b);
  return 0;
}