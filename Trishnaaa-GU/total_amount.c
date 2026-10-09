#include<stdio.h>
int main()
{ float P,R,T,SI,A;
      printf("Enter principal,rate,time\n");
      scanf("%f %f %f",&P,&R,&T);
         SI=(P*R*T)/100;
         A=P+SI;
      printf("Simple interest is:%f\n",SI);
      printf("The total amount is:%f",A);
   return 0;
}