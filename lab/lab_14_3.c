#include<stdio.h>
int main(){

int a,b,e;
float d;
char c;

printf("Enter choise: ");
scanf("%c",&c);

printf("Enter 1st number: ");
scanf("%d",&a);

printf("Enter 2nd number: ");
scanf("%d",&b);





switch (c)
{
case '+':
  
     d=a+b;
     printf("%f",d);
    break;
case '-':
   
     d=a-b;
     printf("%f",d);
    break;
case '*':
   
     d=a*b;
     printf("%f",d);
    break;
case '/':
   
     d=a/b;
     printf("%f",d);
    break;
case 5:
   
     e=a%b;
     printf("%f",e);
    break;
}
    return 0;
}