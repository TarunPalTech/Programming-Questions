// 3. Write a function to compare two strings.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int stringComparision(char str1[],char str2[]);
int main(){
    char str1[50],str2[50];
    printf("Enter your string 1:");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter your string 2:");
    fgets(str2,sizeof(str2),stdin);
    int result=stringComparision(str1,str2);
    if(result==0){
        printf("Both are same!");
    }else if(result==-1){
        printf("String 1 comes before String 2.");
    }else if(result==1){
        printf("String 1 comes after String 2.");
    }else{
        printf("Error occurred!");
    }
    return 0;
}
int stringComparision(char str1[],char str2[]){
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    int i=0;
    while(str1[i]!=0 && str2[i]!=0){
        if(tolower(str1[i])<tolower(str2[i])){
            return -1;
        }else if(tolower(str1[i])>tolower(str2[i])){
            return 1;
        }
        i++;
    }
    
    if(str1[i]=='\0' && str2[i]=='\0'){
        return 0;
    }
}