// 7. Write a program to print all Prime numbers between two given numbers


#include<stdio.h>
#include<math.h>
int main(){
    int a,b,i;
    
    printf("Enter starting number and then ending number:");
    scanf("%d%d",&a,&b);
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
    return 0;
} 