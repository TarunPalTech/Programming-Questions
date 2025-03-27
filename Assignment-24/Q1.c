                    // Assignment-24: Handling multiple strings

// 1. Write a function to store strings, taken from user, to the given 2d char array.


#include<stdio.h>
#include<string.h>
void inputNames(char str[][20]);
int main(){
    char str[5][20];
    inputNames(str);
    for(int i=0;i<5;i++){
        printf("%s\n",str[i]);
    }
    return 0;
}
void inputNames(char str[][20]){
    printf("Enter five names:");
    for(int i=0;i<5;i++){
        fgets(str[i],20,stdin);
        str[i][strlen(str[i])-1]='\0';
    }
}