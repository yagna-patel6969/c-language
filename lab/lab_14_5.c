#include<stdio.h>
int main (){

char ch;
printf("Enter a character:");
scanf("%c",&ch);
int n=ch;

(n>=65 && n<=90) || (n>=97 && n<=122)?printf("alphabet"):printf("not alphabet");

    return 0;
}