// 6. Write a program to find words ending with a letter 's' and store each such word in a 2d char array.



#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countWord(char str[]);
int storeWords(char str[],char words[][20]);
int main() {
    char str[100];
    printf("Enter your string: ");
    fgets(str, 100, stdin);

    int count = countWord(str);
    char words[count][20];

    int n=storeWords(str, words);
    
    printf("Words ending with 's':\n");
    for (int i = 0; i < n; i++) {
            printf("%s\n", words[i]);
    }

    return 0;
}

int storeWords(char str[], char words[][20]) {
    str[strcspn(str, "\n")] = '\0';
    int wordStart = 0, wordEnd = 0, i = 0, j = 0,count=0;
    while (str[wordEnd] != '\0') {
        while (str[wordEnd] != ' ' && str[wordEnd] != '\0') {
            wordEnd++;
        }
        if (wordEnd > wordStart && str[wordEnd - 1] == 's') {
            j = 0; // Reset index for the next word
            while (wordStart < wordEnd) {
                words[i][j++] = str[wordStart++];
            }
            words[i][j] = '\0'; // Null-terminate the word
            i++; // Move to the next word
            count++;
        }
        wordStart = wordEnd + 1; // Move to the next word
        wordEnd++;
    }
    return count;
}
int countWord(char str[]){
    int count=0,flag=1,i=0;
    while(str[i]){
        if(isalpha(str[i]) && flag==1){
            count++;
            flag=0;
        }else if(isspace(str[i])){
            flag=1;
        }
        i++;
    }
    return count;
}