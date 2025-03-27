// 4. Write a program to count spaces in a given string.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0';
    int count=0;
    for(int i=0;str[i];i++){
        if(' '==str[i]){
            count++;
        }
    }
    printf("There are total %d spaces.",count);
    return 0;
}