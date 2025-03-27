// 8. Write a function to print all unique elements in an array.



#include<stdio.h>
#include<stdlib.h>
void input(int a[],int size);
void print(int a[],int size);
void printAllUniqueElements(int a[],int size);
void sort(int a[],int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    printAllUniqueElements(a,size);
    return 0;
}
void printAllUniqueElements(int a[],int size){
    sort(a,size);
    int count,i=0;
    while(i<size){
        count=1;
        while(i<size-1 && a[i]==a[i+1]){
            i++;
            count++;
        }
        if(count==1){
            printf("%d\t",a[i]);
        }
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