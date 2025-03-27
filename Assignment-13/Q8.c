// 8. Write a program to check whether a given character is uppercase alphabet or lower case 
// alphabet or some other special character, using switch case statement.


#include<stdio.h>
int main(){
    char n;
    printf("Enter a character:");
    scanf("%c",&n);
    switch(n){
        case 'A' ... 'Z':
            printf("Uppercase alphabet!");
            break;
        case 'a' ... 'z':
            printf("Lowercase alphabet!");
            break;
        case '0' ... '9':
            printf("Digit!");
            break;
        default:
            printf("Any other special character!");
    }
    return 0;
} 