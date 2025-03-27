/* 
1234321
123 321
12   21
1     1
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
            if(j<=n+1-i || j>=n-1+i){
                j<n?printf("%d",k++):printf("%d",k--);
            }else{
                if(j==n){
                    k--;
                }
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} 