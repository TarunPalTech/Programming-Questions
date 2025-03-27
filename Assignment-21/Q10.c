// 10. Write a program to find first occurrence of a given character in a given


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0';
    char ch;
    printf("Enter a character:");
    scanf(" %c",&ch);
    for(int i=0;str[i];i++){
        if(ch==str[i]){
            printf("Character %c is at the position %d.",ch,i+1);
            return 0;
        }
    }
    printf("Character not found!");
    return 0;
}