// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.



#include<stdio.h>
#include<stdlib.h>
void input(int a[],int size);
void print(int a[],int size);
void rotateArray(int [],int,int,int);
int findFirstOccurrenceOfDuplicateValues(int a[],int size);
void sort(int a[],int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    int result=findFirstOccurrenceOfDuplicateValues(a,size);
    if(result==0){
        printf("Dulpicate number not found!");
    }else{
        printf("Duplicate value %d is at the position %d.",a[result],result+1);
    }
    return 0;
}
int findFirstOccurrenceOfDuplicateValues(int a[],int size){
    for(int i=0;i<size-1;i++){
        if(a[i]==a[i+1]){
            return i;
        }
    }
    return 0;
}