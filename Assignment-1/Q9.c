// 9. Write a program to calculate area of a rectangle. Input appropriate data from the user.

#include<stdio.h>
int main(){
    int length,width;
    printf("Enter length & width:");
    scanf("%d%d",&length,&width);
    printf("Area is %d.",length*width);
    return 0;
}