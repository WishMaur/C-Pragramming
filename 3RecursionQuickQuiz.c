// Using Recursion ... print "Hello world" 5 times...input by user..

#include<stdio.h>
void hello(int n);

int main(){
    int n;
    printf("Entet the numbere; ");
    scanf("%d",&n);

    hello(n);
      
return 0;
}

void hello(int n){
    if(n==0){
        return;
    }
    printf("Hello world\n");
    hello(n-1);

}
