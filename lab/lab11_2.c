#include<stdio.h>
int main (){

    float a;
    printf("Enter your number :");
    scanf("%f",&a);
     
    if(a>0){
        printf("your number is positive");
    }
    else if( a==0){
        printf("your number is netural");
    }
     else{
        printf("your number is negative");
    }
    
    return 0;
}