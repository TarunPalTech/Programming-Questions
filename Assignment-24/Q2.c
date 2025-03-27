// 2. Write a program to find the number of vowels in each of the 5 strings stored in two 
// dimensional arrays, taken from the user.


#include<stdio.h>
#include<string.h>
void inputNames(char str[][20]);
int countVowels(char str[][20]);
int main(){
    char str[5][20];
    printf("There are total %d vowels.",countVowels(str));
    return 0;
}
int countVowels(char str[][20]){
    inputNames(str);
    int count=0;
    char vowels[]="aeiouAEIOU";
    for(int i=0;i<5;i++){
        for(int j=0;str[i][j];j++){
            for(int k=0;vowels[k];k++){
                if(str[i][j]==vowels[k]){
                    count++;
                }
            }
        }
    }
    return count;
}
void inputNames(char str[][20]){
    printf("Enter five names:");
    for(int i=0;i<5;i++){
        fgets(str[i],20,stdin);
        str[i][strlen(str[i])-1]='\0';
    }
}