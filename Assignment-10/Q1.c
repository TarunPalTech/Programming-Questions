// 1. Write a program to find the Nth term of the Fibonacci series.


#include<stdio.h>
#include<math.h>
int main(){
    int n,a=-1,b=1,c;
    
    printf("Enter a number:");
    scanf("%d",&n);
    while(n){
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    printf("Value is %d.",c);
    return 0;
} 