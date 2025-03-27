// 2. Write a function to reverse a string.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reverseString(char []);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    reverseString(str);
    printf("Now string is %s.",str);
    return 0;
}
void reverseString(char str[]){
    char temp;
    str[strcspn(str,"\n")]='\0';
    int start=0,end=strlen(str)-1;
    while(start<end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}