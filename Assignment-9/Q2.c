// 2. Write a program to calculate sum of first N even natural numbers


#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=10){
        sum+=i*2;
        i++;
    }
    printf("Sum is %d.",sum);
    return 0;
} 