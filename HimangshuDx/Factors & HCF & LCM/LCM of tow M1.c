//Least Common Multiple(LCM) of two numner.  --Method 1

#include<stdio.h>

int LCM(int a, int b)
{
    int i;
    printf("\nLCM of %d and %d is: ",a,b);
    for(i=a; ;i++)    
    {
        if(i%a==0 && i%b==0)    
        {   printf("%d",i);
            break;
        }
    }
    return 1;
}

int main()
{
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a,&b);
    if(a<=0 || b<=0)
    {   printf("\nPlease enter two Positive Numbers.");
        return 0;
    }

    LCM(a,b);

    return 0;
} 


/*main khela ei for loop tut ase--
  -> 'i' tu 'a' r pora start hobo and majot eko condition nai, so eitu eta infinite loop. 
  -> Infinite loop lua karon tu hol: ami 'i' increment kori check kori goi thakim and jetiai eta number bisari pam, wich is divisible by 'a' and 'b', tetiai loop break kori dim. 
  -> And  (i=a) loop tu 'a' r pora start korisu karon: 'a' e completely nijoke devide kore, so tare tolor positive numbers khini check kora dorkar nai, and and LCM ketiau duita number (a,b)t ke xoru nohoy.  Damn it !!
*/

