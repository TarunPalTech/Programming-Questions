/* 
ABCDEFG
 ABCDE
  ABC
   A
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
        for(int j=1;j<=n*2-1;j++){
            if(j>=i && j<=n*2-i){
                printf("%c",temp++);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} 