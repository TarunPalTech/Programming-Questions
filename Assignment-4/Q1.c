// 1. Write a program to input a three digit number and display the sum of the digits.


#include<stdio.h>
int main(){
    int x;
    printf("Enter a three digit number:");
    scanf("%d",&x);
    printf("Sum is %d.",x%10+x/10%10+x/100);
    return 0;
}