// 11. Write a program to calculate lcm of two numbers.

#include<stdio.h>
int gcd(int,int);
int lcm(int a,int b);
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("LCM is %d.",lcm(a,b));
    return 0;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int gcd(int a,int b){
    if(a>b){
        if(a%b==0){
            return b;
        }else{
            return gcd(a%b,b);
        }
    }else{
        if(b%a==0){
            return a;
        }else{
            return gcd(a,b%a);
        }
    }
}