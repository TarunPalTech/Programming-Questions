/* 
   *
  * *
 * * *
* * * *
*/


#include<stdio.h>
#include<math.h>
int main(){
    int n,k;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        k=1;
        for(int j=1;j<=n*2-1;j++){
            if(j>=n+1-i && j<=n-1+i){
                k?printf("*"):printf(" ");
                k=1-k;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} 