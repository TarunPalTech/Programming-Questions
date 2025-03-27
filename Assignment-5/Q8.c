// 8. Write a program to check whether roots of a given quadratic equation are real & distinct, 
// real & equal or imaginary roots.



#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    
    int D=b*b-4*a*c;
    
    if(D==0){
        printf("Roots are real and equal!");
    }else if(D>0){
        printf("Roots are real but different!");
    }else{
        printf("Roots are imaginary!");
    }
    return 0;
}