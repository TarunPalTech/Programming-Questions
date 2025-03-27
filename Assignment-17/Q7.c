// 7. Write a recursive function to calculate HCF of two numbers

// First Method

// #include<stdio.h>
// int hcf(int a,int b);
// int main(){
//     int a,b;
//     printf("Enter two numbers:");
//     scanf("%d%d",&a,&b);
//     printf("HCF is %d.",hcf(a,b));
//     return 0;
// }
// int hcf(int a,int b){
//     if(b==0){
//         return a;
//     }
//     return hcf(b,a%b);
// }



// Second Method

#include<stdio.h>
int hcf(int,int);
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("HCF is %d.",hcf(a,b));
    return 0;
}
int hcf(int a,int b){
    if(a>b){
        if(a%b==0){
            return b;
        }else{
            return hcf(a%b,b);
        }
    }else{
        if(b%a==0){
            return a;
        }else{
            return hcf(a,b%a);
        }
    }
}