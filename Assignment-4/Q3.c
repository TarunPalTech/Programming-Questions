// 3. Write a program to print size of an int, a float, a char and a double type variable


#include<stdio.h>
int main(){
    int x;
    float y;
    char z;
    double d;
    printf("Size of int data type: %d\n",sizeof(x));
    printf("Size of float data type: %d\n",sizeof(y));
    printf("Size of char data type: %d\n",sizeof(z));
    printf("Size of double data type: %d",sizeof(d));
    return 0;
}