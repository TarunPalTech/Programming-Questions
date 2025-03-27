// 3. Write a function to count words in a given string


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countWords(char str[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    printf("There are total %d words.",countWords(str));
    return 0;
}
int countWords(char str[]){
    int count=0,flag=1;
    for(int i=0;str[i];i++){
        if(str[i]!=' ' && flag==1){
            count++;
            flag=0;
        }else if(str[i]==' '){
            flag=1;
        }
    }
    return count;
}