// 2. Write a program to calculate the product of two matrices each of order 3x3.


#include<stdio.h>
void inputMatrix(int [][3]);
void printMatrix(int [][3]);
void productOfMatrix(int [][3],int [][3]);
int main(){
    int a[3][3],b[3][3];
    inputMatrix(a);
    inputMatrix(b);
    productOfMatrix(a,b);
}
void productOfMatrix(int a[][3],int b[][3]){
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=0;
            for(int k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printMatrix(c);
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