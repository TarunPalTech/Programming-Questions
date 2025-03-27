/* 
ABCDCBA
ABC CBA
AB   BA
A     A
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    char k;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        k='A';
        for(int j=1;j<=n*2-1;j++){
            if(j<=n+1-i || j>=n-1+i){
                j<n?printf("%c",k++):printf("%c",k--);
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