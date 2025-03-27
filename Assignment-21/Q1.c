            // Assignment-21: String Basics

// 1. Write a program to calculate the length of the string. (without using builtin method)

#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0';
    int i;
    for(i=0;str[i];i++);
    printf("Length of the string is %d.",i);
    return 0;
}