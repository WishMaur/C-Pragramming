// Write a function to calculate Percentage of a student from marks in science , math , hindi.

#include<stdio.h>
void percentage(int sci, int math, int hindi);
int main(){
    int a,b,c;
    printf("Enter the science number: ");
    scanf("%d",&a);
     printf("Enter the math number: ");
    scanf("%d",&b);
     printf("Enter the hindi number: ");
    scanf("%d",&c);

    percentage(a,b,c);


return 0;
}
void percentage(int sci, int math, int hindi){
    float perc=(sci+math+hindi)/3;
    printf("Percentage is: %f", perc);

}