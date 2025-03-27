// 8. Write a program to check whether a given number is a Prime number or not




#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            printf("Number isn't prime!");
            return 0;
        }
    }
    printf("Number is prime!");
    return 0;
} 