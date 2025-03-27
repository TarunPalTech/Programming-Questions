// 2. Write a program which takes the cost price and selling price of a product from the user. 
// Now calculate and print profit or loss percentage.


#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter cost price and selling price:");
    scanf("%d%d",&cp,&sp);
    
    if(cp>sp){
        printf("Loss percentage is %f.",(cp-sp)/((float)cp)*100.0);
    }else if(sp>cp){
        printf("Profit percentage is %f.",(sp-cp)/((float)cp)*100.0);
    }else{
        printf("No profit or no loss!");
    }
    return 0;
}