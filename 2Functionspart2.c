/*
Types of Functions:-
    Library functions:- Commonly required functions grouped together in a library file on disk.
    User-defined functions:- These are the functions declared and defined by the user.
*/


/* Passing values to functions:-
Note:
1. Parameters are the values or variable placeholders in the function definition. Ex: a & b
2. Arguments are the actual values passed to the function to make a call. Ex: 2 & 3
3. A function can return only one value at a time.
4. If the passed variable is changed inside the function, the function call doesn’t change the value in the calling function.
*/

// Sum is function which takes a and b as input and return an integer as an output .

#include<stdio.h>

int sum(int a,int b);  //Function Prototype declaration

int main(){
    int c;
    c=sum(3,12);      //Function Call ...& Here 3 & 12 are arguments 
    printf("%d",c);


return 0;
}

int sum(int a,int b){     //where 'a' and 'b' are parameters  
       int c;                                      
       c=a+b;

    return c;
   }