// 10. WAP to take time as an input in below given format and convert the time format and display the result as given below.

// User Input date format - "HH:MM"

// Output format - "HH hour and MM Minute"


#include<stdio.h>
int main(){
    int h,m;
    printf("Enter time(HH:MM):");
    scanf("%d:%d",&h,&m);
    printf("%d Hour and %d Minutes",h,m);
    return 0;
}