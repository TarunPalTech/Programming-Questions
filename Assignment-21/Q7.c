// 7. Write a program to reverse a string.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0';
    
    int length=strlen(str);
    int start=0,end=length-1;
    char temp;
    while(start<end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    
    printf("Updated string is %s.",str);
    return 0;
}