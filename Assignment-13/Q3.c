// 3. Write a program which takes the day number of a week and displays a unique greeting message for 
// the day.


#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Hello!");
            break;
        case 2:
            printf("Hi!");
            break;
        case 3:
            printf("Namaste!");
            break;
        case 4:
            printf("Suprabhat!");
            break;
        case 5:
            printf("Khush rahein!");
            break;
        case 6:
            printf("Mast rahein!");
            break;
        case 7:
            printf("Byast rahein!");
            break;
        default:
            printf("choose a correct option!");
    }
    return 0;
} 