// 3. Write a program to calculate simple interest.

#include<stdio.h>
int main(){
    float p,r,t;
    printf("Enter principle amount:");
    scanf("%f%f%f",&p,&r,&t);
    printf("Simple interest is %f.",(p*r*t)/100.0);
    return 0;
}