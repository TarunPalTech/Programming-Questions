// 4. Write a program to find the greatest number in an array of size 10. Take array values from the user.


#include<stdio.h>
int main(){
    int a[10], greatest;
    printf("Enter 10 elements:");
    scanf("%d",&a[0]);
    greatest=a[0];
    for(int i=1;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]>greatest){
            greatest=a[i];
        }
    }
    printf("Greatest number is %d.",greatest);
    return 0;
}