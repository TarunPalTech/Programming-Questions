// 3. Write a program to print the first N natural numbers in reverse order



#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",n+1-i);
        i++;
    }
    return 0;
} 