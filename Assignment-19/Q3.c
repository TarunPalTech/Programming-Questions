// 3. Write a function to sort an array of any size. (TSRN)



#include<stdio.h>
void input(int a[],int size);
void print(int a[],int size);
void sort(int a[],int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    sort(a,size);
    print(a,size);
    return 0;
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