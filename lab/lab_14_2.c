#include<stdio.h>
int main(){

int a;
printf("Enter a month number:");
scanf("%d",&a);

switch (a)
{
case 1:
    a==1;
    printf("jan");
    printf("31 days");
    break;
    case 2:
    a==2;
    printf("feb");
    printf("28 days");
    break;
case 3:
    a==3;
    printf("march");
    printf("31 days");
    break;
    case 4:
    a==4;
    printf("apr");
    printf("30 days");
    break;
    case 5:
    a==5;
    printf("may");
    printf("31 days");
    break;
    case 6:
    a==6;
    printf("jun");
    printf("30 days");
    break;
    case 7:
    a==7;
    printf("jul");
    printf("31 days");
    break;
    case 8:
    a==8;
    printf("aug");
    printf("31 days");
    break;
    case 9:
    a==9;
    printf(" sep");
    printf("30 days");
    break;
    case 10:
    a==10;
    printf("oct");
    printf("31 days");
    break;
    case 11:
    a==11;
    printf("nuv");
    printf("30 days");
    break;
    case 12:
    a==12;
    printf("dec");
    printf("31 days");
    break;
}

    return 0;
}