// 9. Write a program in C to copy one string to another char array.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0';
    char copy[50];
    for(int i=0;str[i];i++){
        copy[i]=str[i];
    }
    printf("%s",copy);
    return 0;
}