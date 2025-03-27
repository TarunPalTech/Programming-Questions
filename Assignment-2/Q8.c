// 8. Write a program to input three characters from the user and display characters 
// with their corresponding ASCII codes.


#include<stdio.h>
int main(){
    char a,b,c;
    printf("Enter three characters separated by comma:");
    scanf("%c,%c,%c",&a,&b,&c);
    printf("%c-%d\n%c-%d\n%c-%d",a,a,b,b,c,c);
    return 0;
}