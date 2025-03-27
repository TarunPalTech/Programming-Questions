// 6. Write a recursive function to calculate factorial of a given number


#include<stdio.h>
int factN(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial is %d.",factN(n));
    return 0;
}
int factN(int n){
    if(n==0){
        return 1;
    }
    return n*factN(n-1);
}