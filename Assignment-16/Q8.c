// 8. Write a recursive function to print binary of a given decimal number.

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
        printN(n/2);
        printf("%d\t",n%2);
    }
}