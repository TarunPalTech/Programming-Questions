// 3. Write a program to check whether a given number is there in the Fibonacci series or not.


#include<stdio.h>
#include<math.h>
int main(){
    int n,a=-1,b=1,c;
    
    printf("Enter a number:");
    scanf("%d",&n);
    while(1){
        c=a+b;
        if(n==c){
            printf("Number exists!");
            break;
        }else if(c>n){
            printf("Number doesn't exist!");
            break;
        }
        a=b;
        b=c;
    }
    return 0;
} 