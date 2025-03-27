// 9. Write a function to store all the words in a given string which are starting from 'a', 
// in a two dimensional char array.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countWords(char str[]);
int storeWords(char str[], char words[][20]);
int main(){
    char str[100];
    printf("Enter your string:");
    fgets(str,100,stdin);
    int count=countWords(str); 
    char words[count][20];
    count=storeWords(str,words);
    for(int i=0;i<count;i++){
        printf("%s\n",words[i]);
    }
    return 0;
}
int storeWords(char str[],char words[][20]){
    int wordStart=0,i=0,j,flag=1;
    while(str[wordStart]!='\0'){
        if(flag==1 && tolower(str[wordStart])=='a'){
            j=0;
            while(!isspace(str[wordStart]) && str[wordStart]!='\0'){
                words[i][j++]=str[wordStart++];
            }
            words[i][j]='\0';
            i++;
            flag=0;
        }else if(str[wordStart-1]==' ' && tolower(str[wordStart])=='a'){
            j=0;
            while(!isspace(str[wordStart]) && str[wordStart]!='\0'){
                words[i][j++]=str[wordStart++];
            }
            words[i][j]='\0';
            i++;
        }
        wordStart++;
    }
    return i;
}
int countWords(char str[]){
    int count=0,flag=1;
    for(int i=0;str[i];i++){
        if(isalpha(str[i]) && flag){
            count++;
            flag=0;
        }else if(isspace(str[i])){
            flag=1;
        }
    }
    return count;
}