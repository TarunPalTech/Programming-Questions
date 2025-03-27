// 8. Write a function to calculate the number of arrangements one can make from n items and 
// r selected at a time. (TSRS)


#include<stdio.h>
int factorial(int n);
int arrangements(int n,int r);
int main(){
    int n,r;
    printf("Enter number of elements and selected items:");
    scanf("%d%d",&n,&r);
    printf("All possible arrangements are %d.",arrangements(n,r));
    return 0;
}
int arrangements(int n,int r){
    return factorial(n)/factorial(n-r);
}
int factorial(int n){
    int fact=1;
    if(n==0){
        return 1;
    }
    while(n){
        fact*=n;
        n--;
    }
    return fact;
}