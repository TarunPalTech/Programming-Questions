// 4. Write a function to reverse a string word wise. 
// (For example if the given string is "Mysirg Education Services" then the resulting string should be 
// "Services Education Mysirg")


#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reverseStringWordWise(char str[]);
void reverseString(char str[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    reverseStringWordWise(str);
    printf("%s",str);
    return 0;
}
void reverseStringWordWise(char str[]){
    str[strcspn(str,"\n")]='\0';
    reverseString(str);
    int wordStart=0,wordEnd=0;
    while(str[wordEnd]!='\0'){
        while(str[wordEnd]!=' ' && str[wordEnd]!='\0'){
            wordEnd++;
        }
        int end=wordEnd-1;
        char temp;
        while(wordStart<end){
            temp=str[wordStart];
            str[wordStart]=str[end];
            str[end]=temp;
            wordStart++;
            end--;
        }
        wordStart=wordEnd+1;
        wordEnd++;
    }
}
void reverseString(char str[]){
    int start=0,end=strlen(str)-1;
    char temp;
    while(start<end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}