//              Assignment-14: Functions

// 1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
float area(float r);
int main(){
    float r;
    printf("Enter radius:");
    scanf("%f",&r);
    printf("Area is %f.",area(r));
    return 0;
}
float area(float r){
    return 3.14*r*r;
}