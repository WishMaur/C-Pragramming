/*
Logic Operators::--
   Logic And Operators(&&):- IF both the operand(condition) are non zero (value return 1 : true) then return true;
       else return false;.

   Logic Or Operators(||):-IF any one or both the operand(condition) is non zero (value return 1 : true) then return true;
       else return false;. 

   Logic Not Operators(!):- it is used to reverse the logical state.. means:-if operand(condition) is true then logic not operators make it false. and false------true..  
*/

#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,d;
    a=2;
    b=3;
    c=3;
    d=4;

    printf("a<b && b>a %d\n",a<b&&b>a);
    printf("a<b && b<a %d\n",a<b && b<a);

    printf("a<b || b>a %d\n",a<b||b>a);
    printf("a<b || b<a %d\n",a<b || b<a);

    printf("!(a<b) %d\n",!(a<b));

    return 0;
}