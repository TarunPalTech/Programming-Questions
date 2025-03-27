            // Assignment-19: Arrays and Functions

// 1. Write a function to find the greatest number from the given array of any size.(TSRS)


#include<stdio.h>
int findGreatest(int [],int);
void input(int a[],int size);
void print(int a[],int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    printf("Greatest number is %d.",findGreatest(a,size));
    return 0;
}
int findGreatest(int a[],int size){
    int greatest=a[0];
    for(int i=1;i<size;i++){
        if(a[i]>greatest){
            greatest=a[i];
        }
    }
    return greatest;
}
void input(int a[],int size){
    printf("Enter %d elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
}