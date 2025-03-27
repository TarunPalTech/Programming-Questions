// 2. Write a function to calculate simple interest. (TSRS)


#include<stdio.h>
float si(float,float,float);
int main(){
    int p,r,t;
    printf("Enter principle amount, rate of interest and period of time:");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple interest is %f.",si(p,r,t));
    return 0;
}
float si(float p,float r,float t){
    return (p*r*t)/100.0;
}