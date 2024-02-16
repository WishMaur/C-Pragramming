#include<stdio.h>
int main(){
    int num;
    printf("Enter Your Number: ");
    scanf("%d",&num);
    if(num==1){
        printf("Your number is 1\n");
    }
    else if(num==2){
        printf("Your number is 2\n");
    }
    else if(num==3){
        printf("Your number is 3\n");
    }
    else{
        printf("Your number is not 1, 2, 3\n");
    }

    // ONE LINER
    // (a<5)?printf("A is less than 5"):printf("A is not less than 5");

    // note: termary operators

    return 0;
}