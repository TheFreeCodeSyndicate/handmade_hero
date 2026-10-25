//Write a C program to print all even numbers from 1 to n.

#include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);

    for(int i =1; i<=n; i++){
        if(i%2 == 0){
            printf("%d \n",i);
        }
    }

    return 0;
}


//Dusre Loops se bhi ho jaaye?

//Kyun Nahi!!

//Yeh lijiye 

//- While Loop


int main(){
    int n, i =1;
    scanf("%d", &n);

    while(i<=n){
        if( i%2 == 0){
            printf("%d\n", i);
        }

    i++;

    }

    return 0;
}


//Ab Do While Loop ki baari

int main(){
    int n, i =1;
    scanf("%d", &n);

    do{
        if( i%2 == 0){
            printf("%d\n", i);
        }
        i++;
    }while(i<=n);

    return 0;
}


// Yayyyy!!! yeh karke bohot maza aaya.

// Ab iske aage ke quetions midsem ke baad most probably