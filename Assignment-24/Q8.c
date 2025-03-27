// 8. Write a function to check whether a pair of strings are anagram or not. 
// Both the strings are stored in a 2d char array.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countWords(char str[]);
void changeIntoLowerCase(char words[][20]);
void sortStrings(char words[][20]);
void areAnagrams(char words[][20]);
int main(){
    char words[2][20];
    printf("Enter string1:");
    fgets(words[0],20,stdin);
    printf("Enter string2:");
    fgets(words[1],20,stdin);
    words[0][strcspn(words[0],"\n")]='\0';
    words[1][strcspn(words[1],"\n")]='\0';
    areAnagrams(words);
    return 0;
}
void areAnagrams(char words[][20]){
    if(strlen(words[0])!=strlen(words[1])){
        printf("Strings are not anagrams!");
        return;
    }
    changeIntoLowerCase(words);
    sortStrings(words);
    if(strcmp(words[0],words[1])==0){
        printf("Strings are anagrams!");
    }else{
        printf("Strings are not anagrams!");
    }
}
void sortStrings(char words[][20]){
    int i=0;
    while(i<2){
        char temp;
        for(int r=1;r<strlen(words[i]);r++){
            for(int j=0;j<strlen(words[i])-r;j++){
                if(words[i][j]>words[i][j+1]){
                    temp=words[i][j];
                    words[i][j]=words[i][j+1];
                    words[i][j+1]=temp;
                }
            }
        }
        i++;
    }
}
void changeIntoLowerCase(char words[][20]){
    int i=0,j;
    while(i<2){
        j=0;
        while(words[i][j]!='\0'){
            words[i][j]=tolower(words[i][j]);
            j++;
        }
        i++;
    }
}