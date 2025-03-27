/* 
ABCDE
 BCDE
  CDE
   DE
    E
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    char temp;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        temp='A';
        for(int j=1;j<=n;j++){
            if(i<=j){
                printf("%c",temp);
            }else{
                printf(" ");
            }
            temp++;
        }
        printf("\n");
    }
    return 0;
} 