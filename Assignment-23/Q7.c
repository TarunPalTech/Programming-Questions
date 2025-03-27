// 7. Write a function to find a word in a given string.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
void changeIntoUpperCase(char str[]);
int findWord(char str[],char word[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    char word[10];
    printf("Enter your word:");
    fgets(word,10,stdin);
    str[strcspn(str,"\n")]='\0';
    word[strcspn(word,"\n")]='\0';
    if(findWord(str,word)){
        printf("Word found!");
    }else{
        printf("Word not found!");
    }
    return 0;
}
int findWord(char str[],char word[]){
    changeIntoUpperCase(str);
    changeIntoUpperCase(word);
    int i=0,j;
    while(str[i]!='\0'){
        j=0;
        while(word[j]!='\0'){
            if(str[i]==word[j]){
                i++;
                j++;
            }
            else{
                break;
            }
        }
        if(word[j]=='\0' && (str[i]==' ' || str[i]=='\0')){
            return 1;
        }
        i++;
    }
    return 0;
}
void changeIntoUpperCase(char str[]){
    for(int i=0;str[i];i++){
        str[i]=toupper(str[i]);
    }
}