// 7. Write a program to count digits in a given number


#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n){
        count++;
        n/=10;
    }
    printf("There are total %d digits!",count);
    return 0;
} 