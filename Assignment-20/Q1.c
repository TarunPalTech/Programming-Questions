            // Assignment-20: Multi Dimensional Arrays


// 1. Write a program to calculate the sum of two matrices each of order 3x3.


#include<stdio.h>
void inputMatrix(int [][3]);
void printMatrix(int [][3]);
void sumOfMatrix(int [][3],int [][3]);
int main(){
    int a[3][3],b[3][3];
    inputMatrix(a);
    inputMatrix(b);
    sumOfMatrix(a,b);
    printMatrix(a);
}
void sumOfMatrix(int a[][3],int b[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]=a[i][j]+b[i][j];
        }
    }
}
void printMatrix(int a[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void inputMatrix(int a[][3]){
    printf("Enter 9 elements:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
}