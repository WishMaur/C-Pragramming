//WRITE A PROGRAM TO CHECK A NUMBER IS GREATER THAN 9 AND SMALL THAN 100 ?
// TRUE...1 OR FALSE ...0;


#include<stdio.h>
int main(){
 int num;
 printf("Enter the number: ");
 scanf("%d",&num);

 printf("%d",9<num && num<100);

return 0;
}