// 2. Write a function to find the smallest number from the given array of any size.(TSRS)


#include<stdio.h>
void input(int a[],int size);
void print(int a[],int size);
int findSmallest(int a[],int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    printf("Smallest number is %d.",findSmallest(a,size));
    return 0;
}
int findSmallest(int a[],int size){
    int smallest=a[0];
    for(int i=1;i<size;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    return smallest;
}
void input(int a[],int size){
    printf("Enter %d elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
}
