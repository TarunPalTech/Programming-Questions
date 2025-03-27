/* 
    1
   1 1
  1 2 1
 1 2 2 1
1 2 3 2 1
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n,k,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        temp=1;
        k=1;
        for(int j=1;j<=n*2-1;j++){
            if(j>=n+1-i && j<=n-1+i){
                if(k){
                    j<n?printf("%d",temp++):printf("%d",temp--);
                }else{
                    if(j==n){
                        temp--;
                    }
                    printf(" ");
                }
                k=1-k;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} 