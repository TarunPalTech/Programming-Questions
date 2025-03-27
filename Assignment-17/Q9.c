// 9. Write a program in C to count the digits of a given number using recursion.


#include<stdio.h>
int countDigit(int n);
int main(){
    int n;
    printf("Enter two numbers:");
    scanf("%d",&n);
    printf("There are total %d digits!",countDigit(n));
    return 0;
}
int countDigit(int n){
    if(n){
        return 1+countDigit(n/10);
    }
}