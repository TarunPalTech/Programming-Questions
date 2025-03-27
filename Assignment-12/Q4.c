/*  
   1
  121
 12321
1234321
*/


#include<stdio.h>
#include<math.h>
int main(){
    int n,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        temp=1;
        for(int j=1;j<=n*2-1;j++){
            if(j>=n+1-i && j<=n-1+i){
                j<n?printf("%d",temp++):printf("%d",temp--);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} 