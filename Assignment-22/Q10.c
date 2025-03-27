// 10. Write a function to check whether a given string is an alphanumeric string or not. 
// (Alphanumeric string must contain at least one alphabet and one digit)


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isAlpha(char str[]);
int main(){
    char str[50];
    printf("Enter your string;");
    fgets(str,sizeof(str),stdin);
    
    if(isAlpha(str)){
        printf("String is alphanumeric!");
    }else{
        printf("String isn't alphanumeric!");
    }
    return 0;
}
int isAlpha(char str[]){
    str[strcspn(str,"\n")]='\0';
    int flag1=0,flag2=0;
    for(int i=0;str[i];i++){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
            flag1=1;
            break;
        }
    }
    for(int i=0;str[i];i++){
        if(str[i]>=48 && str[i]<=57){
            flag2=1;
            break;
        }
    }
    if(flag1 && flag2){
        return 1;
    }
    else{
        return 0;
    }
}