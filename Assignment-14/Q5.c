// 5. Write a function to print first N odd natural numbers. (TSRN)


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
    int i=1;
    while(i<=n){
        printf("%d\t",2*i-1);
        i++;
    }
}