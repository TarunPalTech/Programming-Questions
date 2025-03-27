// 2. Write a function to trim a string (removing leading spaces from both the ends).

#include<stdio.h>
#include<string.h>
#include<ctype.h>
void trimString(char str[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    trimString(str);
    printf("Updated string is %s.",str);
    return 0;
}
void trimString(char str[]){
    str[strcspn(str,"\n")]='\0';
    int start=0,end=strlen(str)-1;
    while(start<=end && str[start]==' '){
        start++;
    }
    while(end>=start && str[end]==' '){
        end--;
    }
    int i=0;
    while(start<=end){
        str[i]=str[start];
        start++;
        i++;
    }
    str[i]='\0';
}