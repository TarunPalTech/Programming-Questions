// 9. Write a program which takes the length of the sides of a triangle as an input. 
// Display whether the triangle is valid or not.


#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three sides of a traingle:");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a<b+c && b<a+c && c<a+b){
        printf("Triangle is valid!");
    }else{
        printf("Triangle isn't valid!");
    }
    return 0;
}