// 6. Write a function to count vowels in a given string.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countVowels(char str[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    printf("There are total %d vowels.",countVowels(str));
    return 0;
}
int countVowels(char str[]){
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
    return count;
}