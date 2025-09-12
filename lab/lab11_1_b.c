#include<stdio.h>
int main(){

    int a;
    printf("enter a first number :");
    scanf("%d",&a);

     int b;
    printf("enter a second number :");
    scanf("%d",&b);
    
    int temp;
     temp =a;
     a=b;
     b = temp;

    printf("now a is :%d and b is :%d",a,b);
    return 0;
}