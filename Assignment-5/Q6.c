// 6. Write a program to check whether a given number is a three digit number or not.


#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    
    if(x>99 && x<1000){
        printf("Number is a three dgiit number!");
    }else{
        printf("Number is not a three digit number!");
    }
    return 0;
}