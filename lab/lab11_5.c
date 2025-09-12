#include<stdio.h>
int main(){

    char ab;
    printf("enter a character : ");
    scanf("%c",&ab);

    if(ab=='a' || ab=='e' ||ab=='i' || ab=='o' ||ab== 'u'){
        printf("vowel");
    }
    else{
        printf("consonant");
    }
    return 0;
}