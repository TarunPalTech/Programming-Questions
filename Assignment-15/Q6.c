// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>
#include<math.h>
void printPrime(int a,int b);
int main(){
    int a,b;
    printf("Enter starting number and ending number:");
    scanf("%d%d",&a,&b);
    printPrime(a,b);
    return 0;
}
void printPrime(int a,int b){
    int i;
    while(a<b){
        for(i=2;i<sqrt(a);i++){
            if(a%i==0){
                break;
            }
        }
        if(i>sqrt(a)){
            printf("%d\t",a);
        }
        a++;
    }
}
