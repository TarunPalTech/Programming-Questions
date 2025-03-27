/* 
2. Write a menu driven program with the following options:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3 Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    while(1){
        printf("\nEnter an option:");
        scanf("%d",&n);
        float a,b;
        switch(n){
            case 1:
                printf("Enter two numbers:");
                scanf("%f%f",&a,&b);
                printf("Sum is %f.",a+b);
                break;
            case 2:
                printf("Enter two numbers:");
                scanf("%f%f",&a,&b);
                printf("Subtraction is %f.",a-b);
                break;
            case 3:
                printf("Enter two numbers:");
                scanf("%f%f",&a,&b);
                printf("Multiplication is %f.",a*b);
                break;
            case 4:
                printf("Enter two numbers:");
                scanf("%f%f",&a,&b);
                printf("Division is %f.",a/b);
                break;
            case 5:
                printf("You are out from the block!");
                exit(0);
            default:
                printf("choose a correct option!");
        }
    }
    return 0;
} 