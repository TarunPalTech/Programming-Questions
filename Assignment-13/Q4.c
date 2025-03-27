// 4. Write a menu driven program with the following options:
    // 1. Check whether a given set of three numbers are lengths of an isosceles triangle or not
    // 2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
    // 3. Check whether a given set of three numbers are equilateral triangle or not
    // 4. Exit


    #include<stdio.h>
    #include<stdlib.h>
    int main(){
        int n;
        printf("\n1. Isosceles Triangle\n");
        printf("2. Right angled Triangle\n");
        printf("3. Equilateral Triangle\n");
        printf("4. Exit\n");
        while(1){
            printf("\nEnter an option:");
            scanf("%d",&n);
            int a,b,c;
            switch(n){
                case 1:
                    printf("Enter three numbers:");
                    scanf("%d%d%d",&a,&b,&c);
                    if(a<b+c && b<a+c && c<a+b){
                        if(a==b && a==c){
                            printf("Triangle isn't isosceles!");
                        }else if(a==b || a==c || b==c){
                            printf("Triangle is isosceles!");
                        }else{
                            printf("Triangles isn't isosceles!");
                        }
                    }else{
                        printf("Enter valid sides!");
                    }
                    break;
                case 2:
                    printf("Enter three numbers:");
                    scanf("%d%d%d",&a,&b,&c);
                    if(a<b+c && b<a+c && c<a+b){
                        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
                            printf("Triangle is right-angled!");
                        }else{
                            printf("Triangle isn't right-angled!");
                        }
                    }else{
                        printf("Enter valid sides!");
                    }
                    break;
                case 3:
                    printf("Enter three numbers:");
                    scanf("%d%d%d",&a,&b,&c);
                    if(a<b+c && b<a+c && c<a+b){
                        if(a==b && b==c){
                            printf("Triangle is right-angled!");
                        }else{
                            printf("Triangle isn't right-angled!");
                        }
                    }else{
                        printf("Enter valid sides!");
                    }
                    break;
                case 4:
                    printf("You are out from the block!");
                    exit(0);
                default:
                    printf("choose a correct option!");
            }
        }
        return 0;
    } 