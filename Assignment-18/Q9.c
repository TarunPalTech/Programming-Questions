// 9. Write a program to sort an array of 10 elements in descending order.


#include<stdio.h>
int main(){
    int a[10], temp;
    printf("Enter 10 elements:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int round=1;round<10;round++){
        for(int i=0;i<10-round;i++){
            if(a[i]<a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}