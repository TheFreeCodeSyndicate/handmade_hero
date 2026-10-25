//Write a C program to print numbers from n to 1.

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    if(n>=1){
        for(int i=n; i>=1; i--){
            printf("%d\n", i);
        }
    }else{
        for (int i =n; i<=1; i++){
            printf("%d\n",i);
        }
    }

    return 0;
}

// Pehle sirf 1 se bada hoga assume karke kara tha, lekin nahi. dil nahi maana
// Toh lo negative numbers se bhi karega ab yeh prgoram (yum wala emojji) 