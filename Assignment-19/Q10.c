// 10. Write a function to count the frequency of each element of an array.

#include<stdio.h>
#include<stdlib.h>
void input(int a[],int size);
void print(int a[],int size);
void sort(int a[],int size);
void countFrequency(int a[],int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    countFrequency(a,size);
    return 0;
}
void countFrequency(int a[],int size){
    sort(a,size);
    int i=0,count=1;
    while(i<size){
        count=1;
        while(i<size-1 && a[i]==a[i+1]){
            i++;
            count++;
        }
        printf("%d-%d\n",a[i],count);
        i++;
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
void sort(int a[],int size){
    int temp;
    for(int round=1;round<size;round++){
        for(int i=0;i<size-round;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}