// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, 
// otherwise return 0. (TSRS)


#include<stdio.h>
int evenOdd(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(evenOdd(n)){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}
int evenOdd(int n){
    if(n%2==0){
        return 1;
    }
    return 0;
}