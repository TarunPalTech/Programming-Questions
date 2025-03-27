// 10. Write a program to reverse a given number


#include<stdio.h>
#include<math.h>
int main(){
    int n,reverse=0;
    
    printf("Enter a number:");
    scanf("%d",&n);
    while(n){
        reverse=reverse*10+n%10;
        n/=10;
    }
    printf("Rversed number is %d.",reverse);
    return 0;
} 