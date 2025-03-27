// 9. Write a function to make acronym name from a given name. For example, 
// "Ramesh Chand Tiwari" becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta"


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int wordCount(char str[]);
void acronymName(char str[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    acronymName(str);
    printf("Now updated string is %s.",str);
    return 0;
}
void acronymName(char str[]){
    str[strcspn(str,"\n")]='\0';
    int count=wordCount(str)-1;
    int i=0,j=0,flag=1;
    while(str[i]!='\0'){
        while(count){
            if(isalpha(str[i]) && flag==1){
                str[j]=str[i];
                i++;
                j++;
                flag=0;
            }else if(isspace(str[i])){
                str[j]=str[i];
                i++;
                j++;
                count--;
                flag=1;
            }else{
                str[j]=str[i];
                i++;
            }
        }
        str[j]=str[i];
        i++;
        j++;
    }
    str[j]='\0';
}
int wordCount(char str[]){
    int flag=1,count=0;
    for(int i=0;str[i];i++){
        if(isalpha(str[i]) && flag==1){
            count++;
            flag=0;
        }else if(isspace(str[i])){
            flag=1;
        }
    }
    return count;
}