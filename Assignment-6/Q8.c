// 8. Write a program to check whether a given character is an alphabet (uppercase), 
// an alphabet (lower case), a digit or a special character.


#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    
    if(ch>=65 && ch<=90){
        printf("Uppercase alphabet!");
    }else if(ch>=97 && ch<=122){
        printf("Lowercase alphabet!");
    }else if(ch>=48 && ch<=57){
        printf("Digit!");
    }else{
        printf("Any other special character!");
    }
    return 0;
}