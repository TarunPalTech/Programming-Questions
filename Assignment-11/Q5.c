/* 
1
12
123
1234
12345
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                printf("%d",j);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} 