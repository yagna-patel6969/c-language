#include<stdio.h>
int main(){

int a,b,c,n,d;
printf("Enter a 1st number:");
scanf("%d",&a);

printf("Enter a 2nd number:");
scanf("%d",&b);

printf("Enter a 3rd number:");
scanf("%d",&c);

if(a>b){
    n=1;
}
else{
    n=2;
}
  switch(n){
case 1:
    d=a*c;
    printf("%d",d);
case 2:
    d=b*c;
    printf("%d",d);
  }


    return 0;
}