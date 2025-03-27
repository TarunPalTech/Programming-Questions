// 10. Write a program to swap values of two int variables in single line arithmetic expression.


#include<stdio.h>
int main(){
    int x=10,y=20;
    x=x+y-(y=x);
    printf("x=%d\ny=%d",x,y);
    return 0;
}