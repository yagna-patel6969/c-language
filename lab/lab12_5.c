#include<stdio.h>
int main(){

float m,sci,ss,eng,sans;

printf("Enter a maths marks:");
scanf("%f",&m);

printf("Enter a science marks:");
scanf("%f",&sci);


printf("Enter a english marks:");
scanf("%f",&eng);


printf("Enter a socialscience marks:");
scanf("%f",&ss);


printf("Enter a sanskrit marks:");
scanf("%f",&sans);

float a;
 a=(eng+sci+ss+sans+m)/5;

 if(a<=35){
    printf("You are fail");
 }
 else if (a>36 && a<=45)
 {
     printf("You are pass");
 }
 else if (a>46 && a<=60)
 {
     printf("You got second class");
 }
 else if (a>61 && a<=70)
 {
     printf("You got first class");
 } 
  else if ( a>70)
 {
    printf ("You got Distintion");
 }
    return 0;
}