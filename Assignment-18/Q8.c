// 8. Write a program to find the second smallest number in an array of size 10. 
// Take array values from the user.


#include<stdio.h>
int main(){
    int a[10], smallest,secondSmallest;
    printf("Enter 10 elements:");
    scanf("%d%d",&a[0],&a[1]);
    if(a[0]<a[1]){
        smallest=a[0];
        secondSmallest=a[1];
    }else{
        smallest=a[1];
        secondSmallest=a[0];
    }
    for(int i=2;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]<smallest){
            secondSmallest=smallest;
            smallest=a[i];
        }else if(a[i]<secondSmallest){
            secondSmallest=a[i];
        }
    }
    printf("Second smallest number is %d.",secondSmallest);
    return 0;
}