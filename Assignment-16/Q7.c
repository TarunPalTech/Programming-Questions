// 7. Write a recursive function to print squares of first N natural numbers.


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
    if(n>0){
        printN(n-1);
        printf("%d\t",n*n);
    }
}