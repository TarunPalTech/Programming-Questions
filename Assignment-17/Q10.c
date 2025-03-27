// 10. Write a program in C to calculate the power of any number using recursion.


#include<stdio.h>
float calculatePower(float n,int p);
int main(){
    float n;
    int p;
    printf("Enter a number:");
    scanf("%f",&n);
    printf("Enter power of your number:");
    scanf("%d",&p);
    printf("Now value is %f!",calculatePower(n,p));
    return 0;
}
float calculatePower(float n,int p){
    if(p==0){
        return 1;
    }else if(p>0){
        return n*(calculatePower(n,p-1));
    }else{
        return calculatePower(n,p+1)/n;
    }
}