// WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS DIVISIBLE BY 7 OR NOT ?
// (if return 1 then its divisible else return 0 then not divisible)

// WRITE A PROGRAM TO CHECK IF A NUMBER IS ODD OR EVEN ?
// (if return 1 then its even else return 0 then odd)

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Divisible test return:  %d",a % 7 == 0);

    return 0;
}