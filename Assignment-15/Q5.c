// 5. Write a function to print first N prime numbers (TSRN)


#include<stdio.h>
#include<math.h>
void printFirstNPrime(int n);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printFirstNPrime(n);
    return 0;
}
void printFirstNPrime(int n){
    int i,a=2,range=1;
    while(range<=n){
        for(i=2;i<sqrt(a);i++){
            if(a%i==0){
                break;
            }
        }
        if(i>sqrt(a)){
            printf("%d\t",a);
            range++;
        }
        a++;
    }
}