// 10. Write a program which takes the month number as an input and display number of days in that month.


#include<stdio.h>
int main(){
    int x;
    printf("Enter serial number of a month:");
    scanf("%d",&x);
    
    if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12){
        printf("There are 31 days!");
    }else if(x==2){
        printf("There are 28 days");
    }else if(x>1 && x<12){
        printf("There are 30 days!");
    }else{
        printf("Invalid value!");
    }
    return 0;
} 