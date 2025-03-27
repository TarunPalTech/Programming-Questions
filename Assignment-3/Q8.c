// 8. Write a program to swap values of two int variables without using third variable 
// and without using +, - operators.


#include<stdio.h>
int main(){
    int x=10,y=20;
    x=x*y;
    y=x/y;
    x=x/y;
    printf("x=%d\ny=%d",x,y);
    return 0;
}