// 4. Write a program to find the smallest number in an array of size 10. Take array values from the user.


#include<stdio.h>
int main(){
    int a[10], smallest;
    printf("Enter 10 elements:");
    scanf("%d",&a[0]);
    smallest=a[0];
    for(int i=1;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    printf("Smallest number is %d.",smallest);
    return 0;
}