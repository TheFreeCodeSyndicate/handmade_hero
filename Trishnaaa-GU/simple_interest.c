#include<stdio.h>
int main()
{ float P,R,T,SI;
      printf("Enter principal amount, rate of interest and duration:\n");
      scanf("%f %f %f", &P,&R,&T);
          SI=(P*R*T)/100;
      printf("Simple interest is:%f",SI);
   return 0;
}