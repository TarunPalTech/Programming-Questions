// 10. Write a function to concatenate two strings.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
void concatenate(char str1[],char str2[]);
int main(){
    char str1[50];
    printf("Enter your string 1:");
    fgets(str1,50,stdin);
    char str2[50];
    printf("Enter your string 2:");
    fgets(str2,50,stdin);
    concatenate(str1,str2);
    return 0;
}
void concatenate(char str1[],char str2[]){
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    char concatenatedString[100];
    int i,j;
    for(i=0;str1[i];i++){
        concatenatedString[i]=str1[i];
    }
    concatenatedString[i]=' ';
    i++;
    for(j=0;str2[j];j++){
        concatenatedString[i]=str2[j];
        i++;
    }
    concatenatedString[i] = '\0';
    printf("Concatednated String is %s.",concatenatedString);
    
}