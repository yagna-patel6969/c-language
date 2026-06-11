// Online C compiler to run C program online
#include <stdio.h>

int factorial (int a){
    int fact =1;
    for(int i=1 ; i<=a ; i++){    
        fact=fact*i;
    }
    return fact;
}

int main() {

    int a=3;
    int fact=factorial(a);
    printf("factorial=%d",fact);

    return 0;
}