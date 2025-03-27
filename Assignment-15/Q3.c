// 3. Write a function to check whether a given number is Prime or not. (TSRS)


#include<stdio.h>
#include<math.h>
int checkPrime(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(checkPrime(n)){
        printf("Number is prime!");
    }else{
        printf("Number isn't prime!");
    }
    return 0;
}
int checkPrime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
