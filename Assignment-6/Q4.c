// 4. Write a program to check whether a given alphabet is in uppercase or lowercase.


#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    
    if(ch>=65 && ch<=90){
        printf("Uppercase alphabet!");
    }else if(ch>=97 && ch<=122){
        printf("Lowercase alphabet!");
    }else{
        printf("Not an alphabet!");
    }
    return 0;
}