// 6. Write a program to convert a given string into lowercase


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i];i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+32;
        }
    }
    printf("Updated string is %s.",str);
    return 0;
}