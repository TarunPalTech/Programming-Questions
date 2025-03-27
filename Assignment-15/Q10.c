// 10. Write a function to find the sum of first N terms of 
// the series 11/1+21/2+3!/3+41/4+5!/5... n!/n (TSRS)


#include<stdio.h>
#include<math.h>
int factorial(int n);
int sumOfSeries(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum is %d.",sumOfSeries(n));
    return 0;
}
int sumOfSeries(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=factorial(i)/i;
    }
    return sum;
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