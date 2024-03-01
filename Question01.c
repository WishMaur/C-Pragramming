// Write a function that prints Namaste if user is Indian & Bonjour if the user is french..

#include<stdio.h>
void Namaste();
void Bonjour();

int main(){
    char ch;
    printf("Enter i for Indian and f for French: ");
    scanf("%c",&ch);
    if(ch=='i'){
        Namaste();
    }
    else{
        Bonjour();
    }
    
return 0;
}

void Namaste(){
    printf("Namaste\n");
}
void Bonjour(){
    printf("Bonjour\n");
}