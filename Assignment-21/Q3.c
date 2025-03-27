// 3. Write a program to count vowels in a given string


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0';
    char vowels[]="aeiou";
    int count=0;
    for(int i=0;str[i];i++){
        for(int j=0;vowels[j];j++){
            if(vowels[j]==tolower(str[i])){
                count++;
            }
        }
    }
    printf("There are total %d characters.",count);
    return 0;
}