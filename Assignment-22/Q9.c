// 9. Write a function to swap two characters of a given string with specified indices.


#include<stdio.h>
#include<string.h>
#include<ctype.h>
void swapElements(char str[],int i1,int i2);
int main(){
    char str[50];
    printf("Enter your string;");
    fgets(str,sizeof(str),stdin);
    int i1,i2;
    printf("Enter starting index and ending index:");
    scanf("%d%d",&i1,&i2);
    swapElements(str,i1,i2);
    printf("Now updated string is %s.",str);
    return 0;
}
void swapElements(char str[],int i1,int i2){
    char temp;
    temp=str[i1];
    str[i1]=str[i2];
    str[i2]=temp;
}