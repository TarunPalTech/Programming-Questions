// 10. A 2d array is full with 10 email ids. Write a function to find how many of them belongs to 
// gmail.com 

#include<stdio.h>
#include<string.h>
int countWords(char str[][20],int n);
int main(){
    char str[5][20]={"pal@gmail.com","pal@hotmail.com","pal@google.com","tpal@gmail.com"};
    printf("There are total %d email ids.",countWords(str,5));
    return 0;
}
int countWords(char str[][20],int n){
    char matchedString[]="gmail.com";
    int k,count=0,j;
    for(int i=0;i<n;i++){
        if(str[i][strcspn(str[i],"@")]=='@'){
            j=strcspn(str[i],"@")+1;
            k=0;
            while(str[i][j]!='\0'){
                if(matchedString[k]==str[i][j]){
                    j++;
                    k++;
                }else{
                    break;
                }
            }
            if(matchedString[k]=='\0'){
                count++;
            }
        }
    }
    return count;
}