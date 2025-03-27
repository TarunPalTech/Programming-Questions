// 9. Write a function to merge two arrays of the same size sorted in descending order.



#include<stdio.h>
#include<stdlib.h>
void input(int a[],int size);
void print(int a[],int size);
void sort(int a[],int size);
void mergeTwoElements(int a[],int b[],int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size],b[size];
    input(a,size);
    input(b,size);
    mergeTwoElements(a,b,size);
    return 0;
}
void mergeTwoElements(int a[],int b[],int size){
    int c[size*2],i,j;
    for(i=0;i<size;i++){
        c[i]=a[i];
    }
    for(j=0;j<size;j++){
        c[i]=b[j];
        i++;
    }
    sort(c,size*2);
    print(c,size*2);
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