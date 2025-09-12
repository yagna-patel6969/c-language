#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    printf("enter the value of a b and c :");
    scanf("%d %d %d",&a,&b,&c);
    //for d 
    int d=(pow(b,2)-(4*a*c));
    if(d<0){
            printf("");
    }
}