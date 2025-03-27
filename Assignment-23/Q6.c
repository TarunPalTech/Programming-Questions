// 6. Write a function to count frequency of each character of the given string.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
void countFrequency(char str[]);
void convertIntoUpperCase(char str[]);
void sorting(char str[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    countFrequency(str);
    return 0;
}
void countFrequency(char str[]){
    str[strcspn(str,"\n")]='\0';
    convertIntoUpperCase(str);
    sorting(str);
    int i=0,count;
    while(str[i]!='\0'){
        count=1;
        while(str[i+1]!='\0' && str[i]==str[i+1]){
            i++;
            count++;
        }
        if(isalpha(str[i]))
            printf("%c -> %d\n",str[i],count);
        i++;
    }
}
void convertIntoUpperCase(char str[]){
    for(int i=0;str[i];i++){
        str[i]=toupper(str[i]);
    }
}
void sorting(char str[]){
   char temp;
   for(int r=1;r<strlen(str);r++){
       for(int i=0;i<strlen(str)-r;i++){
           if(str[i]>str[i+1]){
               temp=str[i];
               str[i]=str[i+1];
               str[i+1]=temp;
           }
       }
   }
}