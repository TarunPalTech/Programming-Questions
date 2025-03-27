/* 
1
23
456
78910
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n,temp=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                printf("%d",temp++);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} 