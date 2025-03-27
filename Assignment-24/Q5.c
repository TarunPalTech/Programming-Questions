// 5. Write a function to remove duplicate names stored in the list of names stored in a 2d char array.



#include<stdio.h>
#include<string.h>
void sortStrings(char str[][20],int n);
int removeDuplicate(char str[][20],int n);
int main(){
    char names[][20]={"John", "Sarah", "Michael", "Sarah", "Emily", "John", "Michael", "Emma", "Emma", "Emily"};
    int n=sizeof(names)/sizeof(names[0]);
    sortStrings(names,n);
    n=removeDuplicate(names,n);
    for(int i=0;i<n;i++){
        printf("%s\n",names[i]);
    }
    return 0;
}
int removeDuplicate(char str[][20],int n){
    int j=0;
    for(int i=0;i<n-1;i++){
        if(strcmp(str[i],str[i+1])!=0){
            strcpy(str[j],str[i]);
            j++;
        }
    }
    strcpy(str[j],str[n-1]);
    j++;
    return j;
}
void sortStrings(char str[][20],int n){
    char temp[20];
    for(int round=1;round<n;round++){
        for(int i=0;i<n-round;i++){
            if(strcmp(str[i],str[i+1])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],temp);
            }
        }
    }
}