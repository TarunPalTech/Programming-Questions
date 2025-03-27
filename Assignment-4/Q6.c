// 6. Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert 
// it into USD.


#include<stdio.h>
int main(){
    int x;
    printf("Enter amount in INR:");
    scanf("%d",&x);
    
    printf("Amount in dollars is %f.",x/84.23);
    return 0;
}