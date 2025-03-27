// 5. Write a function to do case insensitive comparison of two strings.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int caseInSensitiveComparision(char str1[],char str2[]);
void reverseString(char str[]);
int main(){
    char str1[50];
    char str2[50];
    printf("Enter your string 1:");
    fgets(str1,50,stdin);
    printf("Enter your string 2:");
    fgets(str2,50,stdin);
    int result=caseInSensitiveComparision(str1,str2);
    if(result==-1){
        printf("String 1 comes before string 2.");
    }else if(result==1){
        printf("String 1 comes after string 2.");
    }else{
        printf("Both are same!");
    }
    return 0;
}
int caseInSensitiveComparision(char str1[],char str2[]){
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    int i=0;
    while(str1[i]!='\0' && str2[i]!='\0'){
        if(tolower(str1[i])<tolower(str2[i])){
            return -1;
        }else if(tolower(str1[i])>tolower(str2[i])){
            return 1;
        }
        i++;
    }
    if(str1[i]=='\0'  && str2[i]=='\0'){
        return 0;
    }else if(str1[i]=='\0'){
        return -1;
    }else{
        return 1;
    }
}