                    // Assignment-17: More on Recursion

// 1. Write a recursive function to calculate sum of first N natural numbers



#include<stdio.h>
int sumN(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum is %d.",sumN(n));
    return 0;
}
int sumN(int n){
    if(n==1){
        return 1;
    }
    return n+sumN(n-1);
}