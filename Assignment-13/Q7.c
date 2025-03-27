/* 
7. Write a menu driven program with the following options:
1. Factorial of a number
2. Check Even and Odd
3. Area of circle
4. Sum of first N natural numbers
5. Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("\n1. Factorial of a number\n");
    printf("2. Check even and odd\n");
    printf("3. Area of circle\n");
    printf("4. Sum of first N natural numbers\n");
    printf("5. Exit\n");
    while(1){
        printf("\nEnter an option:");
        scanf("%d",&n);
        int a;
        switch(n){
            case 1:
                int fact=1;
                printf("Enter a number:");
                scanf("%d",&a);
                if(a==0){
                    printf("Factorial is 1.");
                    break;
                }
                while(a){
                    fact*=a;
                    a--;
                }
                printf("Factorial is %d.",fact);
                break;
            case 2:
                printf("Enter a number:");
                scanf("%d",&a);
                if(a%2==0){
                    printf("Even!");
                }else{
                    printf("Odd!");
                }
                break;
            case 3:
                float r;
                printf("Enter radius:");
                scanf("%f",&r);
                printf("Area of circle is %f.",3.14*r*r);
                break;
            case 4:
                int sum=0;
                printf("Enter a number:");
                scanf("%d",&a);
                while(a){
                    sum+=a;
                    a--;
                }
                printf("Sum is %d.",sum);
                break;
            case 5:
                printf("You are out from the  block!");
                exit(0);
            default:
                printf("choose a correct option!");
        }
    }
    return 0;
} 