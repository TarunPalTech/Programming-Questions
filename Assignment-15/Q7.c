// 7. Write a function to print first N terms of Fibonacci series (TSRN)


#include<stdio.h>
#include<math.h>
void fib(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fib(n);
    return 0;
}
void fib(int n){
    int a=-1,b=1,c;
    
    while(n){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        n--;
    }
}