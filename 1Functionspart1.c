/*
Sometime program is bigger in size and its not possible to track..
A function is a block of code which performs a particular task..
A function can be reused by the programmer in a given program any number of times..
*/

#include<stdio.h>
/*
Function Prototype:- it is way to tell the compiler about the function we are going to define in a program..
     Here void indicates that the function returns nothing..
*/
void display(); //Function Prototype/declaration

/*
Function Call:- it is way to tell the compiler to execute the function body at the time the call is mode.. 
  Note that the program execution starts from the main function in the requence the instructions are written..
*/
int main(){
    int a;
    display(); //Function Call:

    return 0;
}

/*
Function Definition:- This part contains the exect set of the instructions(code) which are executed during the function call when a function is a called from main(), the main function falts asleep and gets temporarilu suspended during thid time the control goes to the function being called, when the function body being called . when the function body is done executing main() resumes..
*/
void display(){
    printf("Hey, I am display");
    
}