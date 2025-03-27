// 1. Write a program to calculate average of three integers. Numbers are given by the user.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Average is %f.",(a+b+c)/3.0);
    return 0;
}