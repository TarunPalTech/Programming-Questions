                // Assignment-22: Strings and Functions

// 1. Write a function to calculate length of the string


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int calculateLength(char []);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    
    printf("Length of the string is %d.",calculateLength(str));
    return 0;
}
int calculateLength(char str[]){
    str[strcspn(str,"\n")]='\0';
    int i;
    for(i=0;str[i];i++);
    return i;
}