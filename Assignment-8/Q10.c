// 10. Write a program to print a table of N.


#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=10){
        printf("%d\n",i*n);
        i++;
    }
    return 0;
} 