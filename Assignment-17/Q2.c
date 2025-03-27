// 2. Write a recursive function to calculate sum of first N odd natural numbers


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
    return 2*n-1+sumN(n-1);
}