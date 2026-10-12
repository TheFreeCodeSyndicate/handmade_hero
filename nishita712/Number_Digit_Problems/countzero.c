// Count Zeroes in a Number
#include <stdio.h>
int count_zero(int n)
{
    int count =0,a;
    while(n>0)
    {
      a = n%10;
      if(a==0)
      {
        count++;
      }
      n = n/10;
    }
    return count;
}
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int var = count_zero(num);
    printf("Number of zeroes in the number is : %d\n",var);
    return 0;
}
        