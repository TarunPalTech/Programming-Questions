// 5. Write a program to check whether a given number is divisible by 3 and divisible by 2.


#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    
    if(x%3==0 && x%2==0){
        printf("Number is divisible by 3 and 2!");
    }else{
        printf("Number is not divisible by 3 and 2!");
    }
    return 0;
}