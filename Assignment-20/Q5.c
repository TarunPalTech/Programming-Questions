// 3. Write a program to print the transpose of a given matrix (m*n).


#include<stdio.h>
void printMatrix(int rows,int cols,int matrix[rows][cols]);
void inputMatrix(int rows,int cols,int matrix[rows][cols]);
void transposeMatrix(int rows,int cols,int matrix[rows][cols]);
int main(){
    int rows,cols;
    printf("Enter rows and columns for matrix:");
    scanf("%d%d",&rows,&cols);
    int matrix[rows][cols];
    inputMatrix(rows,cols,matrix);
    transposeMatrix(rows,cols,matrix);
    return 0;
}
void transposeMatrix(int rows,int cols,int matrix[rows][cols]){
    int transMatrix[cols][rows];
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            transMatrix[i][j]=matrix[j][i];
        }
    }
    printMatrix(cols,rows,transMatrix);
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