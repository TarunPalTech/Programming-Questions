// 2. Write a program to count the occurrence of a given character in a given string.



#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0';
    
    char ch;
    int count=0;
    printf("Enter a character:");
    scanf(" %c",&ch);
    for(int i=0;str[i];i++){
        if(ch==str[i]){
            count++;
        }
    }
    printf("The occurrence of %c is %d.",ch,count);
    return 0;
}