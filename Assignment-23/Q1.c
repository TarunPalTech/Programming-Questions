                // Assignment-23: Strings and Functions

// 1. Write a function to check whether a given string is palindrome or not.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
void checkPalindrome(char str[],int size);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    checkPalindrome(str,50);
    return 0;
}
void checkPalindrome(char str[],int size){
    str[strcspn(str,"\n")]='\0';
    char reversedStr[size];
    strcpy(reversedStr,str);
    int start=0,end=strlen(str)-1;
    char temp;
    while(start<end){
        temp=reversedStr[start];
        reversedStr[start]=reversedStr[end];
        reversedStr[end]=temp;
        start++;
        end--;
    }
    if(strcmp(reversedStr,str)==0){
        printf("String is palindrome!");
    }else{
        printf("String isn't palindrome!");
    }
}