// Any decisions which depend on the condition being met..
/*
Decision making instrutions in C...
 If-else statement
 switch statement
*/

// If-else statement
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the number:");
    scanf("%d",&a);

    if(a%2==0){
        printf("Number is even %d",a);
    }
    else{
        printf("Number is odd ");
    }

    return 0;
}