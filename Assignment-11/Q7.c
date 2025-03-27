/* 
ABCDE
 ABCD
  ABC
   AB
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
        for(int j=1;j<=n;j++){
            if(j>=i){
                printf("%c",temp++);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} 