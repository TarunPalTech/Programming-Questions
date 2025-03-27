// 2. Write a program to print first N terms of Fibonacci series



#include<stdio.h>
#include<math.h>
int main(){
    int n,a=-1,b=1,c;
    
    printf("Enter a number:");
    scanf("%d",&n);
    while(n){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        n--;
    }
    return 0;
} 