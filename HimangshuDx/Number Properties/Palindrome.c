// check whether a number is a palindrome.
// print all palindrome numbers between 1 and n.
// Summation of Palindrome numbers. 

#include<stdio.h>
#include<stdbool.h>

int palindrome(int n)
{
    int rev=0, temp, last;
    temp =n;

    while(temp>0)
    {
        last=temp%10;
        rev= rev*10+last;
        temp=temp/10;
    }
    if(rev==n)
        return true;
    else 
        return false;
}

int main()
{
    int n; 
    printf("\nEnter a Number: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("\nERROR: Negative Numbers are not considered.\n");
        return 0;
    }

    int r=palindrome(n);
    if(r)
        printf("\n%d is a Palindrome.\n",n);
    else   
        printf("\n%d is not a Palindrome.\n",n);
    
    printf("\nPalindrome numbers from 1 to %d are: ",n);
    int sum=0;
    for(int i=1; i<=n;i++)
    {
        if(palindrome(i))
        {
            printf("%d, ",i);
            sum+=i;
        }
    }
    printf("\nThe summation of Palindrome nunbers from 1 to %d is: %d\n\n", n,sum);

    return 0;
}

//MOROM is a palindrome.