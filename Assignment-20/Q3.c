// 3. Write a program to print the transpose of a given matrix.


#include<stdio.h>
void inputMatrix(int [][3]);
void printMatrix(int [][3]);
void transposeMatrix(int a[][3]);
int main(){
    int a[3][3];
    inputMatrix(a);
    transposeMatrix(a);
    printMatrix(a);
    return 0;
}
void transposeMatrix(int a[][3]){
    int temp;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
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