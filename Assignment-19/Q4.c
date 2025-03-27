// 4. Write a function to rotate an array by n position in d direction. 
// The d is an indicative value for left or right. (For example, if array of size 5 is 
// [32, 29, 40, 12, 70); n is 2 and d is left, then the resulting array after left rotation 2 times is 
// [40, 12, 70, 32, 29])


#include<stdio.h>
#include<stdlib.h>
void input(int a[],int size);
void print(int a[],int size);
void rotateArray(int [],int,int,int);
void sort(int a[],int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size],dir,n;
    printf("Enter direction(0 for left and 1 for right):");
    scanf("%d",&dir);
    printf("Enter number of elements:");
    scanf("%d",&n);
    input(a,size);
    rotateArray(a,size,dir,n);
    print(a,size);
    return 0;
}
void rotateArray(int a[],int size,int dir,int n){
    int temp,i;
    if(dir==0){
        while(n){
            temp=a[0];
            i=0;
            while(i<size-1){
                a[i]=a[i+1];
                i++;
            }
            a[size-1]=temp;
            n--;
        }
    }else if(dir==1){
        while(n){
            temp=a[size-1];
            i=size-1;
            while(i>0){
                a[i]=a[i-1];
                i--;
            }
            a[0]=temp;
            n--;
        }
    }else{
        printf("Try again!");
        exit(0);
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