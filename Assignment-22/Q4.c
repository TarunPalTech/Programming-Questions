// 4. Write a function to transform string into uppercase


#include<stdio.h>
#include<string.h>
#include<ctype.h>
void changeIntoUpperCase(char []);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    changeIntoUpperCase(str);
    printf("Now string is %s.",str);
    return 0;
}
void changeIntoUpperCase(char str[]){
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i];i++){
        str[i]=toupper(str[i]);
    }
}