// 9. Write a program to calculate LCM of two numbers


#include<stdio.h>
#include<math.h>
int main(){
    int a,b,L;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    
    for(L=a>b?a:b;L<=a*b;L++){
        if(L%a==0 && L%b==0){
            printf("LCM is %d.",L);
            break;
        }
    }
    return 0;
} 