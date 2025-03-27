// 7. Write a function to return the most repeating character in a list of strings.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int mostRepeatingCharacter(char strings[][100],int n);
int main(){
    char strings[5][100]={"Hello this is Tarun","Enjoy","Jai ho","Bhawani"};
    printf("%c",mostRepeatingCharacter(strings,5));
    return 0;
}
int mostRepeatingCharacter(char strings[][100],int n){
    int freq[256]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<strings[i][j]!='\0';j++){
            freq[(int)tolower(strings[i][j])]++;
        }
    }
    int max=0;
    char pos='\0';
    for(int i='a';i<='z';i++){
        if(freq[i]>max){
            max=freq[i];
            pos=(char)i;
        }
    }
    return pos;
}