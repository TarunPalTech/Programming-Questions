// 9. Write a function to print all Armstrong numbers between two given numbers. (TSRN)


#include<stdio.h>
#include<math.h>
void printArmstrong(int a,int b);
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printArmstrong(a,b);
    return 0;
}
void printArmstrong(int a,int b){
    int flag=0;
    while(a<b){
        int temp,count=0,rev=0;
        temp=a;
        while(temp){
            count++;
            temp/=10;
        }
        temp=a;
        while(temp){
            rev+=pow(temp%10,count);
            temp/=10;
        }
        if(rev==a){
            printf("%d\t",rev);
            flag=1;
        }
        a++;
    }
    if(flag==0){
        printf("There is no arnstrong number between your range!");
    }
}