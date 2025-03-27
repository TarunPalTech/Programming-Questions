// 3. Write a program to calculate the product of two matrices each of order n*m.

#include<stdio.h>
void printMatrix(int rows,int cols,int matrix[rows][cols]);
void inputMatrix(int rows,int cols,int matrix[rows][cols]);
void productOfMatrix(int r1,int c1,int r2,int c2,int a[r1][c1],int [r2][c2]);
int main(){
    int r1,r2,c1,c2;
    printf("Enter rows and columns for matrix 1:");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns for matrix 2:");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1];
    int b[r2][c2];
    if(c1==r2){
        inputMatrix(r1,c1,a);
        inputMatrix(r2,c2,b);
        productOfMatrix(r1,c1,r2,c2,a,b);
    }else{
        printf("Multiplication isn't possible!");
    }
    return 0;
}
void productOfMatrix(int r1,int c1,int r2,int c2,int a[r1][c1],int b[r2][c2]){
    int c[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for(int k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printMatrix(r1,c2,c);
}
void printMatrix(int rows,int cols,int matrix[rows][cols]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
void inputMatrix(int rows,int cols,int matrix[rows][cols]){
    printf("Enter %d elements:",rows*cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}
