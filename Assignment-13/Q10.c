// 10. Write a menu driven program with the following options:
// 1. Calculate LCM of two numbers
// 2. Calculate sum of the digits of a number
// 3. Volume of a cuboid
// 4. Check whether a given number is Prime or not
// 5. Exit

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n;
    printf("\n1. Calculate LCM of two numbers\n");
    printf("2. Calculate sum of the digits of a number\n");
    printf("3. Volume of a cuboid\n");
    printf("4. Check whether a given number is Prime or not\n");
    printf("5. Exit\n");
    while(1){
        printf("\nEnter an option:");
        scanf("%d",&n);
        int a,b,c;
        switch(n){
            case 1:
                printf("Enter two numbers:");
                scanf("%d%d",&a,&b);
                for(c=a>b?a:b;c<=a*b;c++){
                    if(c%a==0 && c%b==0){
                        printf("LCM is %d.",c);
                        break;
                    }
                }
                break;
            case 2:
                b=0;
                printf("Enter a number:");
                scanf("%d",&a);
                while(a){
                    b+=a%10;
                    a/=10;
                }
                printf("Sum is %d.",b);
                break;
            case 3:
                printf("Enter three numbers:");
                scanf("%d%d%d",&a,&b,&c);
                printf("Volume of the cuboid is %d.",a*b*c);
                break;
            case 4:
                printf("Enter a number:");
                scanf("%d",&a);
                for(b=2;b<sqrt(a);b++){
                    if(a%b==0){
                        printf("Number isn't prime!");
                        break;
                    }
                }
                if(b>sqrt(a)){
                    printf("Number is prime!");
                }
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