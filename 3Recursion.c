/*
Recursion:-
A function defined in C can call itself. This is called recursion.
A function calling itself is also called a recursive function.


Important Notes:-
1. Recursion is sometimes the most direct way to code an algorithm
2. The condition which doesn’t call the function any further in a recursive function is called the base condition.
3. Sometimes, due to a mistake made by the programmer, a recursive function can keep running without returning, resulting in a memory error.
*/

/*
Example of Recursion:
A very good example of recursion is factorial
factorial(n) = 1x 2 x 3...........x n
factorial(n)= 1 x 2 x 3...........n-1 x n
factorial(n)= factorial of (n-1) x n
*/


#include<stdio.h>

int factorial(int x);

int main(){
    int a=3;
    printf("The value of factorial %d is %d",a,factorial(a));
return 0;
}

// Function to calculate factorial using recursion..
int factorial(int x){
int f;
if(x==0||x==1)
return 1;	
else
f= factorial(x-1)* x ;
return f;
}