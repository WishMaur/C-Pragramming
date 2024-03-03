// Write a function to convert celcsius temperature into fahreheit;

#include<stdio.h>
float celtofah(cel);

int main(){
    int n;
    printf("Enter the celcsius temperature: ");
    scanf("%d",&n);

    printf("Fahreheit Temp. is %f",celtofah(n));

return 0;
}

float celtofah(cel){
    float fah;
    fah=(cel*1.8)+32;
    return fah;
}