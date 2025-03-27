// 5. Write a program to ask user about the cost price and selling price banana per dozen.
// Calculate the profit or loss  earned upon selling 25 bananas.

#include<stdio.h>
int main(){
    float cp,sp;
    printf("Enter cost price and selling price of 1 dozen banana:");
    scanf("%f%f",&cp,&sp);
    cp=cp/12;
    sp=sp/12;
    
    if(cp>sp){
        printf("Loss is %f.",25*(cp-sp));
    }else{
        printf("Profit is %f.",25*(sp-cp));
    }
    return 0;
}