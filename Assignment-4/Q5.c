// 5. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit-9 then the resulting number is 2349)


#include<stdio.h>
int main(){
    int x=2345, d=9;
    printf("Updated number is %d.",x/10*10 + d);
    return 0;
}