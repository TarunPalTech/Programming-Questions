// 8. Write a function to find character in a given string between specified indices 
// (start index (inclusive) and end index(exclusive).


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int findCharacter(char str[],char ch,int start,int end);
int main(){
    char str[50];
    printf("Enter your string;");
    fgets(str,sizeof(str),stdin);
    char ch;
    printf("Enter a character:");
    scanf(" %c",&ch);
    int start,end;
    printf("Enter starting index and ending index:");
    scanf("%d%d",&start,&end);
    if(findCharacter(str,ch,start,end)){
        printf("Character found!");
    }else{
        printf("Character not found!");
    }
    return 0;
}
int findCharacter(char str[],char ch,int start,int end){
    str[strcspn(str,"\n")]='\0';
    while(start<end){
        if(str[start]==ch){
            return 1;
        }
        start++;
    }
    return 0;
}