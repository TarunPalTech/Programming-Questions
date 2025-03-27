// 8. Write a function to print PASCAL Triangle. (TSRN)


#include<stdio.h>
void printPattern(int n);
int combinations(int n,int r);
int factorial(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printPattern(n);
    return 0;
}
void printPattern(int n){
    int a=0,b,k;
    for(int i=1;i<=n;i++){
        k=1;
        b=0;
        for(int j=1;j<=n*2-1;j++){
            if(j>=n+1-i && j<=n-1+i){
                k?printf("%d",combinations(a,b++)):printf(" ");
                k=1-k;
            }else{
                printf(" ");
            }
        }
        printf("\n");
        a++;
    }
}
int combinations(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
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