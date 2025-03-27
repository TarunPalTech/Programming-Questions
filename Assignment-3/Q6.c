// 6. Write a program to swap values of two int variables


#include<stdio.h>
int main(){
    int x=10,y=20,z;
    z=x;
    x=y;
    y=z;
    printf("x=%d\ny=%d",x,y);
    return 0;
}