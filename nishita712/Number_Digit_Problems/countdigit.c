//program to count the number of even and odd digits in a number
#include <stdio.h>
int main()
{
    int num,count_even=0,count_odd=0,a;
    printf("Enter a number:\n");
    scanf("%d",&num);
    while(num>0)
{
    a = num%10;
    if(a%2==0)
    {
        count_even++;
    }
    else
    count_odd++;
    num=num/10;
}
printf("Number of even digit in the number : %d\n",count_even);
printf("Number of odd digit in the number is : %d\n",count_odd);
return 0;
}