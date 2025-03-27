// 9. Write a program to check whether a given character is vowel or consonant or some 
// other special character, using switch case statement.


#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        ch=ch-32;
    }
    switch(ch){
        case 'B' ... 'D':
        case 'F' ... 'H':
        case 'J' ... 'N':
        case 'P' ... 'T':
        case 'V' ... 'Z':
            printf("Constant!");
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel!");
            break;
        default:
            printf("Any other special character!");
    }
    return 0;
} 