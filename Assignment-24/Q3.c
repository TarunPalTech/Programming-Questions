// 3. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.



#include<stdio.h>
#include<string.h>
void inputNames(char str[][20]);
void sortStrings(char str[][20]);
int main(){
    char str[5][20];
    sortStrings(str);
    for(int i=0;i<5;i++){
        printf("%s\t",str[i]);
    }
    return 0;
}
void sortStrings(char str[][20]){
    inputNames(str);
    char temp[20];
    for(int round=1;round<5;round++){
        for(int i=0;i<5-round;i++){
            if(strcmp(str[i],str[i+1])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],temp);
            }
        }
    }
}
void inputNames(char str[][20]){
    printf("Enter five names:");
    for(int i=0;i<5;i++){
        fgets(str[i],20,stdin);
        str[i][strlen(str[i])-1]='\0';
    }
}