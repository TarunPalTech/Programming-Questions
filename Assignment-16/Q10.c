// 10. Write a recursive function to print reverse of a given number.

#include<stdio.h>
void printN(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printN(n);
    return 0;
}
void printN(int n){
    if(n){
        printf("%d",n%10);
        printN(n/10);
    }
}