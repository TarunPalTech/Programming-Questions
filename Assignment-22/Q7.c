// 7. Write a function to find a character in a given string. 
// Return index of first occurrence of given character. Return -1 if character not found.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int findCharacter(char str[],char ch[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    char c;
    printf("Enter a character:");
    scanf(" %c",&c);
    char ch[2];
    ch[0]=c;
    ch[1]='\0';
    int result=findCharacter(str,ch);
    if(result==-1){
        printf("Character not found!");
    }else{
        printf("Character %s is at the position %d.",ch,result+1);
    }
    return 0;
}
int findCharacter(char str[],char ch[]){
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i];i++){
        str[i]=tolower(str[i]);
    }
    int result=strcspn(str,ch);
    if(result){
        return result;
    }else{
        return -1;
    }
}