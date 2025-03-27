// 6. Write a function to swap two elements of given array with specified indices.



#include<stdio.h>
#include<stdlib.h>
void input(int a[],int size);
void print(int a[],int size);
void rotateArray(int [],int,int,int);
void swapElements(int a[],int,int i1,int i2);
void sort(int a[],int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    int i1,i2;
    printf("Enter two indices:");
    scanf("%d%d",&i1,&i2);
    input(a,size);
    swapElements(a,size,i1,i2);
    print(a,size);
    return 0;
}
void swapElements(int a[],int size,int i1,int i2){
    int temp;
    if(i1>=0 && i1<size && i1>=0 && i2<size){
        temp=a[i1];
        a[i1]=a[i2];
        a[i2]=temp;
    }
}
void input(int a[],int size){
    printf("Enter %d elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
}
void print(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}