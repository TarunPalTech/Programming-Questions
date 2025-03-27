// 8. Write a program to find next Prime number of a given number


#include<stdio.h>
#include<math.h>
int main(){
    int a,i;
    printf("Enter a number:");
    scanf("%d",&a);
    a++;
    while(1){
        for(i=2;i<sqrt(a);i++){
            if(a%i==0){
                break;
            }
        }
        if(i>sqrt(a)){
            printf("Next prime number is %d",a);
            break;
        }else{
            a++;
        }
    }
    return 0;
} 