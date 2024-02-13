/*
WHICH OF THE FOLLOWING IS INVALID IN C ?
int a; b=a;
int power=3^3;
char dt='21 Dec 2020';
*/ 
#include<stdio.h>
int main(){
   // int a; b=a;  //INVALID


    int v=3^3;  //VALIED
    printf(" %d",v); 

    char dt='21 Dec 2020'; //INVALIED
    printf(" %d",dt); 



    return 0;
}
