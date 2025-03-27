// 7. Write a program to find the second largest in an array. Take array values from the user.


#include<stdio.h>
int main(){
    int a[10], largest,secondLargest;
    printf("Enter 10 elements:");
    scanf("%d%d",&a[0],&a[1]);
    if(a[0]>a[1]){
        largest=a[0];
        secondLargest=a[1];
    }else{
        largest=a[1];
        secondLargest=a[0];
    }
    for(int i=2;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]>largest){
            secondLargest=largest;
            largest=a[i];
        }else if(a[i]>secondLargest){
            secondLargest=a[i];
        }
    }
    printf("Second largest number is %d.",secondLargest);
    return 0;
}