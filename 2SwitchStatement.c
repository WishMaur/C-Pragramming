/*
Switch case Control Instrution
switch case is used when we have to make a choice between number of altermatives for a given varrible..
*/


#include<stdio.h>
int main(){
    int rating;
    printf("Enter your rating: ");
    scanf("%d",&rating);

    switch (rating){
    case 1:
        printf("your rating is 1\n");
        break;
     case 2:
        printf("your rating is 2\n");
        break;
    case 3:
        printf("your rating is 3\n");
        break;
    case 4:
        printf("your rating is 4\n");
        break;
    case 5:
        printf("your rating is 5\n");
        break;   
    default:
        printf("invalid rating\n");
        break;
    }

    return 0;
   
}
