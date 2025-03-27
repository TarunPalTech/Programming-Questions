// 7. Write a program to print the first N even natural numbers in reverse order



#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",n*2+2-2*i);
        i++;
    }
    return 0;
} 