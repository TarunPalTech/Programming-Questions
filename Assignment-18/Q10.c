// 10. Write a program in C to copyt the elements of one array into another array. 
// Take array values from the user.



#include<stdio.h>
int main(){
    int a[10], b[10];
    printf("Enter 10 elements:");
    
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(int i=0;i<10;i++){
        printf("%d\t",b[i]);
    }
    return 0;
}