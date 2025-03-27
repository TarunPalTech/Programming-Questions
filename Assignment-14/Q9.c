// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)



#include<stdio.h>
int findDigit(int n,int d);
int main(){
    int n,d;
    printf("Enter a number and a digit:");
    scanf("%d%d",&n,&d);
    if(findDigit(n,d)){
        printf("Digit exists!");
    }else{
        printf("Digit doesn't exist!");
    }
    return 0;
}
int findDigit(int n,int d){
    while(n){
        if(n%10==d){
            return 1;
        }
        n/=10;
    }
    return 0;
}