// WRITE A PROGRAM TO CHECK value OF 3*X/Y-Z+R ?
// (WHERE X, Y, Z AND R VALUE GIVEN BY THE USER)

#include<stdio.h>
int main(){
    int x,y,z,r;
    printf("Enter value of x: ");
    scanf("%d",& x);
    printf("Enter value of y: ");
    scanf("%d",& y);
    printf("Enter value of z: ");
    scanf("%d",& z);
    printf("Enter value of r: ");
    scanf("%d",& r);

    printf("(3*x/y-z+r) = %d", (3*x/y-z+r));

}