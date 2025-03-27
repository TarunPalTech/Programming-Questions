// 4. Write a function to store each word of a string in a 2 dimensional char array.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countWords(char str[]);
void storeWords(char str[],char words[][20]);
int main(){
    char str[100];
    printf("Enter your string:");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int count=countWords(str);
    char words[count][20];
    storeWords(str,words);
    for(int i=0;i<count;i++){
        printf("%s\n",words[i]);
    }
    return 0;
}
void storeWords(char str[],char words[][20]){
    int i=0,j=0,k=0;
    while(str[i]){
        if(isalpha(str[i])){
            words[j][k]=str[i];
            k++;
        }else if(isspace(str[i])){
            if(k>0){
                words[j][k]='\0';
                j++;
                k=0;
            }
        }
        i++;
    }
    if(k>0){
        words[j][k]='\0';
    }
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