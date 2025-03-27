// 5. Write a recursive function to calculate sum of digits of a given number


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
    if(n){
        return n%10+sumN(n/10);
    }
}