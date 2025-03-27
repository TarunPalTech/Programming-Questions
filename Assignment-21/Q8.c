// 8. Write a program in C to count the total number of alphabets, digits and special characters in a string.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,sizeof(str),stdin);
    
    str[strcspn(str,"\n")]='\0';
    int digits=0,alpha=0,sp=0;
    for(int i=0;str[i];i++){
        if(str[i]>=48 && str[i]<=57){
            digits++;
        }else if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
            alpha++;
        }else{
            sp++;
        }
    }
    
    printf("There are totatl %d special characters.\n",sp);
    printf("There are totatl %d digits.\n",digits);
    printf("There are totatl %d alphabets.\n",alpha);
    return 0;
}