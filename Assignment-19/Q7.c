// 7. Write a function to count a total number of duplicate elements in an array. 
// (Means elements that occurs 2 times in an array)


#include<stdio.h>
#include<stdlib.h>
void input(int a[],int size);
void print(int a[],int size);
int findTotalNumberOfDuplicate(int a[],int size);
void sort(int a[],int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    printf("Total number of duplicate items are %d.",findTotalNumberOfDuplicate(a,size));
    return 0;
}
int findTotalNumberOfDuplicate(int a[],int size){
    sort(a,size);
    int count=0,i=0;
    while(i<size-1){
        if(a[i]==a[i+1]){
            count++;
            while(i<size-1 && a[i]==a[i+1]){
                i++;
            }
            i++;
        }else{
            i++;
        }
    }
    return count;
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