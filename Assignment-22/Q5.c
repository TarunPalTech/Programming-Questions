// 5. Write a function to transform a string into lowercase

#include<stdio.h>
#include<string.h>
#include<ctype.h>
void changeIntoLowerCase(char []);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    changeIntoLowerCase(str);
    printf("Now string is %s.",str);
    return 0;
}
void changeIntoLowerCase(char str[]){
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i];i++){
        str[i]=tolower(str[i]);
    }
}