// 5. Write a program to check whether the given number is even or odd using a bitwise operator.


#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    
    if(x&1==1){
        printf("Number is odd!");
    }else{
        printf("Number is even!");
    }
    return 0;
}